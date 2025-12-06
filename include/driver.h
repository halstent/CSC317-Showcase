#ifndef DRIVER_H
#define DRIVER_H

#include <Eigen/Core>

struct Driver
{
    int vertex;                    // 0-based index of the vertex
    double amplitude;              // amplitude of motion
    double frequency;              // Hz
    double phase;                  // phase offset
    Eigen::RowVector3d direction;  // displacement direction
};

#endif
