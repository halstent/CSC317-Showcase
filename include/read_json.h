#ifndef READ_JSON_H
#define READ_JSON_H
#include <string>
#include <Eigen/Core>
#include <iostream>
#include <vector>
#include "driver.h"
extern std::vector<Driver> drivers;

// Inputs:
//   filename  path to .json file
// Outputs:
//   V  #V by 3 list of vertex positions
//   F  #F by 3 list of triangle indices into rows of V
//   E  #E by 2 list of edge/spring indices into rows of V
//   k  #V list of spring stiffnesses
//   m  #V list of masses 
//   b  #b list of fixed indices into rows of V
//   bc  #b by 3 list of fixed positions
//   VT  #VT by 3 list of texture coordinates
//   FT  #FT by 3 list of texture faces
//   R,G,B  #w by #h by 1 list of texture color values
//

inline bool read_json(
    const std::string& filename,
    Eigen::MatrixXd& V,
    Eigen::MatrixXi& F,
    Eigen::MatrixXi& E,
    Eigen::VectorXd& k,
    Eigen::VectorXd& m,
    Eigen::VectorXi& b,
    Eigen::MatrixXd& bc,
    Eigen::MatrixXd& VT,
    Eigen::MatrixXi& FT,
    Eigen::Matrix<unsigned char, Eigen::Dynamic, Eigen::Dynamic>& R,
    Eigen::Matrix<unsigned char, Eigen::Dynamic, Eigen::Dynamic>& G,
    Eigen::Matrix<unsigned char, Eigen::Dynamic, Eigen::Dynamic>& B
);

// Implementation
#include <igl/readOBJ.h>
#include <igl/dirname.h>
#include <igl/massmatrix.h>
#include <igl/edges.h>
#include <igl/list_to_matrix.h>
#include <igl/polygons_to_triangles.h>
#include <igl/stb/read_image.h>
#include <igl/list_to_matrix.h>
#include <json.hpp>
inline bool read_json(
    const std::string& filename,
    Eigen::MatrixXd& V,
    Eigen::MatrixXi& F,
    Eigen::MatrixXi& E,
    Eigen::VectorXd& k,
    Eigen::VectorXd& m,
    Eigen::VectorXi& b,
    Eigen::MatrixXd& bc,
    Eigen::MatrixXd& VT,
    Eigen::MatrixXi& FT,
    Eigen::Matrix<unsigned char, Eigen::Dynamic, Eigen::Dynamic>& R,
    Eigen::Matrix<unsigned char, Eigen::Dynamic, Eigen::Dynamic>& G,
    Eigen::Matrix<unsigned char, Eigen::Dynamic, Eigen::Dynamic>& B
)
{
    // Heavily borrowing from
    // https://github.com/yig/graphics101-raycasting/blob/master/parser.cpp
    using json = nlohmann::json;

    std::ifstream infile(filename);
    if (!infile) return false;
    json j;
    infile >> j;

    // Load 3d model / spring network
#if defined(WIN32) || defined(_WIN32)
#define PATH_SEPARATOR std::string("\\")
#else
#define PATH_SEPARATOR std::string("/")
#endif

    const std::string obj_filename = j["obj"];
    {
        const std::string full_obj_filename =
            igl::dirname(filename) + PATH_SEPARATOR + obj_filename;
        Eigen::MatrixXd N;
        Eigen::MatrixXi FN;
        if (!igl::readOBJ(full_obj_filename, V, VT, N, F, FT, FN))
        {
            assert(false && "Failed to read obj");
            std::cerr << "Error: Failed to read " << full_obj_filename << std::endl;
            return false;
        }
        std::cout << "VT: " << VT.rows() << "," << VT.cols() << std::endl;
        std::cout << "FT: " << FT.rows() << "," << FT.cols() << std::endl;
    }
    if (F.cols() > 2)
    {
        Eigen::VectorXi I, C, J;

        // readObj polygon version
        igl::polygon_corners(F, I, C);

        igl::edges(F, E);
        igl::polygons_to_triangles(I, C, F, J);
        igl::polygons_to_triangles(I, C, FT, J);
        // igl::polygon_mesh_to_triangle_mesh(Eigen::MatrixXi(F),F);
        // igl::polygon_mesh_to_triangle_mesh(Eigen::MatrixXi(FT),FT);
    }
    else
    {
        E = F;
        F.resize(0, 3);
    }


	// spring coefficients
    if (j.count("k"))
    {
        if (j["k"].is_number())
        {
            // existing behavior: scalar mass for all vertices
            k = Eigen::VectorXd::Constant(E.rows(), 1, j["k"]);
        }
        else if (j["k"].is_array())
        {
            // new behavior: vector of masses
            std::vector<double> k_vec = j["k"].get<std::vector<double>>();
            if (k_vec.size() != E.rows())
            {
                std::cerr << "Error: spring coefficient array size (" << k_vec.size()
                          << ") does not match number of edges (" 
                          << E.rows() << ")" << std::endl;
                return false; // fail gracefully
            }
            k = Eigen::Map<Eigen::VectorXd>(k_vec.data(), k_vec.size());
        }
        else
        {
            std::cerr << "Error: unsupported 'k' format in JSON" << std::endl;
            return false;
        }
    }
    else
    {
        assert(F.rows() > 0 && "if not k given then should be triangle mesh");
        Eigen::SparseMatrix<double> K;
        igl::massmatrix(V, F, igl::MASSMATRIX_TYPE_DEFAULT, K);
        k = K.diagonal();
    }


    // texture?
    if (j.count("png"))
    {
        const std::string png_filename = j["png"];
        const std::string full_png_filename =
            igl::dirname(filename) + PATH_SEPARATOR + png_filename;
        Eigen::Matrix<unsigned char, Eigen::Dynamic, Eigen::Dynamic> A;
        igl::stb::read_image(full_png_filename, R, G, B, A);
    }

    // mass
    if (j.count("m"))
    {
        if (j["m"].is_number())
        {
            // existing behavior: scalar mass for all vertices
            m = Eigen::VectorXd::Constant(V.rows(), 1, j["m"]);
        }
        else if (j["m"].is_array())
        {
            // new behavior: vector of masses
            std::vector<double> mass_vec = j["m"].get<std::vector<double>>();
            if (mass_vec.size() != V.rows())
            {
                std::cerr << "Error: mass array size (" << mass_vec.size()
                    << ") does not match number of vertices (" << V.rows() << ")" << std::endl;
                return false; // fail gracefully
            }
            m = Eigen::Map<Eigen::VectorXd>(mass_vec.data(), mass_vec.size());
        }
        else
        {
            std::cerr << "Error: unsupported 'm' format in JSON" << std::endl;
            return false;
        }
    }
    else
    {
        assert(F.rows() > 0 && "if not m given then should be triangle mesh");
        Eigen::SparseMatrix<double> M;
        igl::massmatrix(V, F, igl::MASSMATRIX_TYPE_DEFAULT, M);
        m = M.diagonal();
    }


    std::vector<int> b_vec = j["b"];
    igl::list_to_matrix(b_vec, b);
    b.array() -= 1;


    if (j.count("bc"))
    {
        assert(false && "not supported");
        return false;
    }
    else
    {
        // use rest positions
        bc.resize(b.rows(), V.cols());
        for (int i = 0; i < b.rows(); i++) { bc.row(i) = V.row(b(i)); }
    }


    // drivers
    if (j.count("drivers"))
    {
        drivers.clear();
        for (auto& d : j["drivers"])
        {
            Driver dr;

            // JSON is 1-based; convert to 0-based
            dr.vertex = d["vertex"].get<int>() - 1;

            dr.amplitude = d["amplitude"].get<double>();
            dr.frequency = d["frequency"].get<double>();
            dr.phase = d.value("phase", 0.0); // default = 0

            // direction: [x,y,z]
            std::vector<double> dir = d["direction"].get<std::vector<double>>();
            if (dir.size() != 3)
            {
                std::cerr << "Error: driver direction must be length 3.\n";
                return false;
            }
            dr.direction = Eigen::Vector3d(dir[0], dir[1], dir[2]);

            if (dr.direction.norm() == 0)
            {
                std::cerr << "Error: driver direction cannot be zero.\n";
                return false;
            }
            dr.direction.normalize();

            drivers.push_back(dr);
        }
    }


    // NOTE: if we add U0 to this, we should update bc's default value to use U0
    // instead of V
    return true;
}

#endif 
