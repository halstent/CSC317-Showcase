# Wave Physics in a Mass-Spring System

## Personal Information
- Name - Halsten Tilk
- UtorID - tilkhals
- Student Number - 1008937590
- Augmented assignment - A8


## Instructions

The steps to run this program begin the same as each assignment:
 1. Recursively clone the repository from GitHub
 2. Create the build folder following the OS-appropriate method outline in the CSC317 tutorial 1 notes
 3. Compile the program as you would any other assignment
 4. Once compiled run the program from the terminal or a shell using the commands (note: this only works if the .exe file is in the build folder):
	1. `./masssprings_sparse ../data/transverse.json` for the transverse simulation
	1. `./masssprings_sparse ../data/longitudinal.json` for the longitudinal simulation
	1. `./masssprings_sparse ../data/wavepool_6x20_.json` for the wavepool and
	1. `./masssprings_sparse ../data/circle-plane.json` for the planar web simulation

## Description

Assignment 8 was augmented in a variety of ways to create this piece of work. The following changes were applied:

- Added driver.h and the Driver class to allow specifying driven vertices from a simulation's JSON file
- Rewrote main.cpp to handle specifically the sparse matrix system implementation, incorporate the Driver class, and have more range in selecting vertex colours
- Rewrote read_json.h to:
	- incorporate reading driven vertices and their parameters
	- handle individualized vertex masses
	- handle individualized spring stiffnesses
- Added code to incorporate the Driver class, individualized mass, and individualized spring stiffnesses into fast_mass_springs_precomputation_sparse.cpp/.h and fast_mass_springs_step.cpp/.h
- Wrote JSON and OBJ files for four different simulations:
	- Transverse wave on a string
	- Longitudinal wave on a string
	- Wave pool with an angular edge wave source
	- Circlular planar web with a radial wave source

## Acknowledgements

Assignment 8 acted as a foundation for this program (provided by the University of Toronto and CSC317 course staff). A majority of the extensions implemented used ChatGPT as an initial drafting tool, providing a rough base from which to customize and adapt to the augmentation.

## Compilation Verification

Compiler output rebuilding the built project from scratch:

Build started at 8:41 PM...
1>------ Build started: Project: ZERO_CHECK, Configuration: Debug x64 ------
1>Checking File Globs
1>1>Checking Build System
2>------ Build started: Project: stb, Configuration: Debug x64 ------
3>------ Build started: Project: igl_stb, Configuration: Debug x64 ------
4>------ Build started: Project: igl_opengl, Configuration: Debug x64 ------
5>------ Build started: Project: igl_glfw, Configuration: Debug x64 ------
6>------ Build started: Project: igl_core, Configuration: Debug x64 ------
7>------ Build started: Project: glfw, Configuration: Debug x64 ------
8>------ Build started: Project: glad, Configuration: Debug x64 ------
2>Building Custom Rule C:/Users/halst/U of T/Year 4/Fall/CSC317/showcase/build/_deps/libigl-src/CMakeLists.txt
3>Building Custom Rule C:/Users/halst/U of T/Year 4/Fall/CSC317/showcase/build/_deps/libigl-src/CMakeLists.txt
5>Building Custom Rule C:/Users/halst/U of T/Year 4/Fall/CSC317/showcase/build/_deps/libigl-src/CMakeLists.txt
4>Building Custom Rule C:/Users/halst/U of T/Year 4/Fall/CSC317/showcase/build/_deps/libigl-src/CMakeLists.txt
6>Building Custom Rule C:/Users/halst/U of T/Year 4/Fall/CSC317/showcase/build/_deps/libigl-src/CMakeLists.txt
7>Building Custom Rule C:/Users/halst/U of T/Year 4/Fall/CSC317/showcase/build/_deps/glfw-src/src/CMakeLists.txt
2>stb_image.cpp
8>Building Custom Rule C:/Users/halst/U of T/Year 4/Fall/CSC317/showcase/build/_deps/glad-src/CMakeLists.txt
7>context.c
8>glad.c
2>stb.vcxproj -> C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\lib\Debug\stb.lib
7>init.c
7>input.c
7>monitor.c
8>glad.vcxproj -> C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\lib\Debug\glad.lib
7>vulkan.c
7>window.c
7>win32_init.c
7>win32_joystick.c
7>win32_monitor.c
7>win32_time.c
7>win32_thread.c
7>win32_window.c
7>wgl_context.c
7>egl_context.c
7>osmesa_context.c
7>Generating Code...
7>glfw.vcxproj -> C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\lib\Debug\glfw3.lib
9>------ Build started: Project: lib, Configuration: Debug x64 ------
9>Building Custom Rule C:/Users/halst/U of T/Year 4/Fall/CSC317/showcase/CMakeLists.txt
9>fast_mass_springs_precomputation_dense.cpp
9>fast_mass_springs_precomputation_sparse.cpp
9>fast_mass_springs_step_dense.cpp
9>fast_mass_springs_step_sparse.cpp
9>signed_incidence_matrix_dense.cpp
9>signed_incidence_matrix_sparse.cpp
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\signed_incidence_matrix_dense.cpp(11,25): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\signed_incidence_matrix_dense.cpp(11,17): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'const int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\signed_incidence_matrix_sparse.cpp(11,25): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\signed_incidence_matrix_sparse.cpp(11,17): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'const int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\fast_mass_springs_step_dense.cpp(24,25): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\fast_mass_springs_step_dense.cpp(24,17): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'const int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\fast_mass_springs_step_dense.cpp(25,27): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\fast_mass_springs_step_dense.cpp(25,19): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'const int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\fast_mass_springs_step_dense.cpp(26,26): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\fast_mass_springs_step_dense.cpp(26,18): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'const int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\fast_mass_springs_step_sparse.cpp(30,25): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\fast_mass_springs_step_sparse.cpp(30,17): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'const int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\fast_mass_springs_step_sparse.cpp(31,27): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\fast_mass_springs_step_sparse.cpp(31,19): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'const int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\fast_mass_springs_step_sparse.cpp(32,26): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\fast_mass_springs_step_sparse.cpp(32,18): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'const int', possible loss of data
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\fast_mass_springs_step_dense.cpp(9,27): warning C4100: 'b': unreferenced parameter
9>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\src\fast_mass_springs_step_sparse.cpp(14,27): warning C4100: 'b': unreferenced parameter
9>lib.vcxproj -> C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\Debug\lib.lib
9>Done building project "lib.vcxproj".
10>------ Build started: Project: masssprings_sparse, Configuration: Debug x64 ------
11>------ Build started: Project: masssprings_dense, Configuration: Debug x64 ------
11>Building Custom Rule C:/Users/halst/U of T/Year 4/Fall/CSC317/showcase/CMakeLists.txt
10>Building Custom Rule C:/Users/halst/U of T/Year 4/Fall/CSC317/showcase/CMakeLists.txt
10>main.cpp
11>main.cpp
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\stb\read_image.cpp(30,23): warning C4018: '<': signed/unsigned mismatch
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\stb\read_image.cpp(30,23): warning C4018: '<': signed/unsigned mismatch
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\stb\read_image.cpp(31,25): warning C4018: '<': signed/unsigned mismatch
11>(compiling source file '../main.cpp')
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\stb\read_image.cpp(31,25): warning C4018: '<': signed/unsigned mismatch
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\read_json.h(130,30): warning C4389: '!=': signed/unsigned mismatch
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\read_json.h(130,30): warning C4389: '!=': signed/unsigned mismatch
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\read_json.h(176,33): warning C4389: '!=': signed/unsigned mismatch
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\read_json.h(176,33): warning C4389: '!=': signed/unsigned mismatch
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\verasansmono_compressed.cpp(39,21): warning C4018: '<': signed/unsigned mismatch
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\verasansmono_compressed.cpp(41,43): warning C4244: '=': conversion from 'int' to 'unsigned char', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\verasansmono_compressed.cpp(46,40): warning C4244: '=': conversion from 'int' to 'unsigned char', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\verasansmono_compressed.cpp(39,21): warning C4018: '<': signed/unsigned mismatch
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\verasansmono_compressed.cpp(41,43): warning C4244: '=': conversion from 'int' to 'unsigned char', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\verasansmono_compressed.cpp(46,40): warning C4244: '=': conversion from 'int' to 'unsigned char', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\verasansmono_compressed.cpp(56,19): warning C4018: '<': signed/unsigned mismatch
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\verasansmono_compressed.cpp(56,19): warning C4018: '<': signed/unsigned mismatch
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\verasansmono_compressed.cpp(58,41): warning C4244: '=': conversion from 'int' to 'unsigned char', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\MeshGL.cpp(222,33): warning C4244: 'argument': conversion from 'Eigen::Index' to 'GLsizei', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\MeshGL.cpp(230,44): warning C4244: 'argument': conversion from 'Eigen::Index' to 'GLsizei', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\MeshGL.cpp(235,46): warning C4244: 'argument': conversion from 'Eigen::Index' to 'GLsizei', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\MeshGL.cpp(240,58): warning C4244: 'argument': conversion from 'Eigen::Index' to 'GLsizei', possible loss of data
11>(compiling source file '../main.cpp')
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\verasansmono_compressed.cpp(58,41): warning C4244: '=': conversion from 'int' to 'unsigned char', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\MeshGL.cpp(222,33): warning C4244: 'argument': conversion from 'Eigen::Index' to 'GLsizei', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\MeshGL.cpp(230,44): warning C4244: 'argument': conversion from 'Eigen::Index' to 'GLsizei', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\MeshGL.cpp(235,46): warning C4244: 'argument': conversion from 'Eigen::Index' to 'GLsizei', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\MeshGL.cpp(240,58): warning C4244: 'argument': conversion from 'Eigen::Index' to 'GLsizei', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(19,42): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(19,54): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(19,65): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(20,54): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(20,65): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(21,54): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(21,65): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(26,42): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(26,54): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(27,42): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(27,54): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(27,66): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(28,43): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(28,55): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(29,49): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(29,60): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(42,41): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(42,51): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(42,60): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(43,40): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(43,50): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(46,40): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(47,48): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(48,52): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(48,62): warning C4305: 'initializing': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(50,30): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(50,20): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(51,40): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(51,31): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(52,36): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(52,27): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(52,18): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(53,36): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(53,26): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(54,40): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(54,30): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(54,21): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(55,38): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(55,29): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(55,20): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(57,39): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(57,29): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(57,19): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(58,43): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(58,33): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(58,23): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(42,19): warning C4305: 'argument': truncation from 'double' to 'const float'
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(19,42): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(19,54): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(19,65): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(20,54): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(20,65): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(21,54): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(21,65): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(26,42): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(26,54): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(27,42): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(27,54): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(27,66): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(28,43): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(28,55): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(29,49): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(29,60): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(42,41): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(42,51): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(42,60): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(43,40): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(43,50): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(46,40): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(47,48): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(48,52): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(48,62): warning C4305: 'initializing': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(50,30): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(50,20): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(51,40): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(51,31): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(52,36): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(52,27): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(52,18): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(53,36): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(53,26): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(54,40): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(54,30): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(54,21): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(55,38): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(55,29): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(55,20): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(57,39): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(57,29): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(57,19): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(58,43): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(58,33): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\material_colors.h(58,23): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(42,19): warning C4305: 'argument': truncation from 'double' to 'const float'
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(295,53): warning C4244: 'argument': conversion from 'Eigen::Index' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(295,53): warning C4244: 'argument': conversion from 'Eigen::Index' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(346,14): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(346,14): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(390,26): warning C4458: declaration of 'V' hides class member
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.h(223,19):
11>    see declaration of 'igl::opengl::ViewerData::V'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(400,15): warning C4244: '=': conversion from 'Eigen::Index' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(424,14): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(390,26): warning C4458: declaration of 'V' hides class member
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.h(223,19):
10>    see declaration of 'igl::opengl::ViewerData::V'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(400,15): warning C4244: '=': conversion from 'Eigen::Index' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(424,14): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(450,14): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(460,3): warning C4389: '==': signed/unsigned mismatch
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(450,14): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(586,35): warning C4244: '=': conversion from '_Ty' to 'unsigned char', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(586,35): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(586,35): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(586,35): warning C4244:             _Ty=double
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(586,35): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(587,35): warning C4244: '=': conversion from '_Ty' to 'unsigned char', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(587,35): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(587,35): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(587,35): warning C4244:             _Ty=double
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(587,35): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(588,35): warning C4244: '=': conversion from '_Ty' to 'unsigned char', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(588,35): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(588,35): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(588,35): warning C4244:             _Ty=double
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(588,35): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(625,22): warning C4018: '<': signed/unsigned mismatch
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(627,47): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(634,5): warning C4389: '==': signed/unsigned mismatch
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(642,43): warning C4244: '=': conversion from 'size_t' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(652,14): warning C4458: declaration of 'invert_normals' hides class member
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.h(303,8):
11>    see declaration of 'igl::opengl::ViewerData::invert_normals'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(653,24): warning C4458: declaration of 'meshgl' hides class member
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.h(338,23):
11>    see declaration of 'igl::opengl::ViewerData::meshgl'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(460,3): warning C4389: '==': signed/unsigned mismatch
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(586,35): warning C4244: '=': conversion from '_Ty' to 'unsigned char', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(586,35): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(586,35): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(586,35): warning C4244:             _Ty=double
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(586,35): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(587,35): warning C4244: '=': conversion from '_Ty' to 'unsigned char', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(587,35): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(587,35): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(587,35): warning C4244:             _Ty=double
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(587,35): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(588,35): warning C4244: '=': conversion from '_Ty' to 'unsigned char', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(588,35): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(588,35): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(588,35): warning C4244:             _Ty=double
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(588,35): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(625,22): warning C4018: '<': signed/unsigned mismatch
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(627,47): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(634,5): warning C4389: '==': signed/unsigned mismatch
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(642,43): warning C4244: '=': conversion from 'size_t' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(652,14): warning C4458: declaration of 'invert_normals' hides class member
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.h(303,8):
10>    see declaration of 'igl::opengl::ViewerData::invert_normals'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(653,24): warning C4458: declaration of 'meshgl' hides class member
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.h(338,23):
10>    see declaration of 'igl::opengl::ViewerData::meshgl'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(831,39): warning C4244: '=': conversion from 'Eigen::Index' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(832,39): warning C4244: '=': conversion from 'Eigen::Index' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(831,39): warning C4244: '=': conversion from 'Eigen::Index' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(832,39): warning C4244: '=': conversion from 'Eigen::Index' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(37,74): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(37,74): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(71,74): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(71,74): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(88,14): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(88,14): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(96,60): warning C4244: 'argument': conversion from 'float' to 'GLsizei', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(96,47): warning C4244: 'argument': conversion from 'float' to 'GLsizei', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(96,34): warning C4244: 'argument': conversion from 'float' to 'GLint', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(96,21): warning C4244: 'argument': conversion from 'float' to 'GLint', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(130,61): warning C4244: 'argument': conversion from 'float' to 'GLsizei', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(130,48): warning C4244: 'argument': conversion from 'float' to 'GLsizei', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(130,35): warning C4244: 'argument': conversion from 'float' to 'GLint', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(130,22): warning C4244: 'argument': conversion from 'float' to 'GLint', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(96,60): warning C4244: 'argument': conversion from 'float' to 'GLsizei', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(96,47): warning C4244: 'argument': conversion from 'float' to 'GLsizei', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(96,34): warning C4244: 'argument': conversion from 'float' to 'GLint', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(96,21): warning C4244: 'argument': conversion from 'float' to 'GLint', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(130,61): warning C4244: 'argument': conversion from 'float' to 'GLsizei', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(130,48): warning C4244: 'argument': conversion from 'float' to 'GLsizei', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(130,35): warning C4244: 'argument': conversion from 'float' to 'GLint', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(130,22): warning C4244: 'argument': conversion from 'float' to 'GLint', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(153,15): warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(158,16): warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(153,15): warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(158,16): warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(159,16): warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(159,16): warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(293,19): warning C4458: declaration of 'camera_eye' hides class member
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(197,19):
11>    see declaration of 'igl::opengl::ViewerCore::camera_eye'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(294,19): warning C4458: declaration of 'camera_up' hides class member
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(199,19):
11>    see declaration of 'igl::opengl::ViewerCore::camera_up'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(293,19): warning C4458: declaration of 'camera_eye' hides class member
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(197,19):
10>    see declaration of 'igl::opengl::ViewerCore::camera_eye'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(294,19): warning C4458: declaration of 'camera_up' hides class member
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(199,19):
10>    see declaration of 'igl::opengl::ViewerCore::camera_up'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(300,19): warning C4458: declaration of 'camera_center' hides class member
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(201,19):
11>    see declaration of 'igl::opengl::ViewerCore::camera_center'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(302,9): warning C4458: declaration of 'camera_view_angle' hides class member
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(203,9):
11>    see declaration of 'igl::opengl::ViewerCore::camera_view_angle'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(303,9): warning C4458: declaration of 'camera_dnear' hides class member
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(205,9):
11>    see declaration of 'igl::opengl::ViewerCore::camera_dnear'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(300,19): warning C4458: declaration of 'camera_center' hides class member
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(201,19):
10>    see declaration of 'igl::opengl::ViewerCore::camera_center'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(302,9): warning C4458: declaration of 'camera_view_angle' hides class member
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(203,9):
10>    see declaration of 'igl::opengl::ViewerCore::camera_view_angle'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(303,9): warning C4458: declaration of 'camera_dnear' hides class member
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(205,9):
10>    see declaration of 'igl::opengl::ViewerCore::camera_dnear'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(304,9): warning C4458: declaration of 'camera_dfar' hides class member
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(207,9):
10>    see declaration of 'igl::opengl::ViewerCore::camera_dfar'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(305,22): warning C4458: declaration of 'trackball_angle' hides class member
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(184,22):
10>    see declaration of 'igl::opengl::ViewerCore::trackball_angle'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(306,9): warning C4458: declaration of 'camera_zoom' hides class member
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(189,9):
10>    see declaration of 'igl::opengl::ViewerCore::camera_zoom'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(307,9): warning C4458: declaration of 'camera_base_zoom' hides class member
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(187,9):
10>    see declaration of 'igl::opengl::ViewerCore::camera_base_zoom'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(308,19): warning C4458: declaration of 'camera_translation' hides class member
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(195,19):
10>    see declaration of 'igl::opengl::ViewerCore::camera_translation'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(309,19): warning C4458: declaration of 'camera_base_translation' hides class member
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(193,19):
10>    see declaration of 'igl::opengl::ViewerCore::camera_base_translation'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(310,21): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(317,11): warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(359,18): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'unsigned int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(360,19): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'unsigned int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(363,21): warning C4244: '=': conversion from 'float' to 'unsigned int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(364,22): warning C4244: '=': conversion from 'float' to 'unsigned int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(425,19): warning C4244: 'argument': conversion from 'unsigned int' to 'const float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(425,25): warning C4244: 'argument': conversion from 'unsigned int' to 'const float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(480,33): warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(481,22): warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(488,65): warning C4244: 'argument': conversion from 'double' to 'GLfloat', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(487,62): warning C4244: 'argument': conversion from 'double' to 'GLfloat', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(304,9): warning C4458: declaration of 'camera_dfar' hides class member
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(207,9):
11>    see declaration of 'igl::opengl::ViewerCore::camera_dfar'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(305,22): warning C4458: declaration of 'trackball_angle' hides class member
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(184,22):
11>    see declaration of 'igl::opengl::ViewerCore::trackball_angle'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(306,9): warning C4458: declaration of 'camera_zoom' hides class member
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(189,9):
11>    see declaration of 'igl::opengl::ViewerCore::camera_zoom'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(307,9): warning C4458: declaration of 'camera_base_zoom' hides class member
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(187,9):
11>    see declaration of 'igl::opengl::ViewerCore::camera_base_zoom'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(308,19): warning C4458: declaration of 'camera_translation' hides class member
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(195,19):
11>    see declaration of 'igl::opengl::ViewerCore::camera_translation'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(309,19): warning C4458: declaration of 'camera_base_translation' hides class member
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.h(193,19):
11>    see declaration of 'igl::opengl::ViewerCore::camera_base_translation'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(310,21): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(317,11): warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(359,18): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'unsigned int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(360,19): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'unsigned int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(363,21): warning C4244: '=': conversion from 'float' to 'unsigned int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(364,22): warning C4244: '=': conversion from 'float' to 'unsigned int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(425,19): warning C4244: 'argument': conversion from 'unsigned int' to 'const float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(425,25): warning C4244: 'argument': conversion from 'unsigned int' to 'const float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(480,33): warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(481,22): warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(488,65): warning C4244: 'argument': conversion from 'double' to 'GLfloat', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(487,62): warning C4244: 'argument': conversion from 'double' to 'GLfloat', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(22,19): warning C4244: 'initializing': conversion from 'int' to 'char', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(25,28): warning C4244: '=': conversion from 'int' to 'char', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(61,21): warning C4127: conditional expression is constant
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(61,21):
11>    consider using 'if constexpr' statement instead
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(175,46): warning C4267: 'argument': conversion from 'size_t' to '_Ty', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(175,46): warning C4267:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(175,46): warning C4267:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(175,46): warning C4267:             _Ty=int
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(175,46): warning C4267:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(191,63): warning C4267: 'argument': conversion from 'size_t' to '_Ty', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(191,63): warning C4267:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(191,63): warning C4267:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(191,63): warning C4267:             _Ty=int
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(191,63): warning C4267:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(219,42): warning C4267: 'argument': conversion from 'size_t' to '_Ty', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(219,42): warning C4267:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(219,42): warning C4267:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(219,42): warning C4267:             _Ty=int
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(219,42): warning C4267:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(223,59): warning C4267: 'argument': conversion from 'size_t' to '_Ty', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(223,59): warning C4267:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(223,59): warning C4267:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(223,59): warning C4267:             _Ty=int
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(223,59): warning C4267:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(22,19): warning C4244: 'initializing': conversion from 'int' to 'char', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(25,28): warning C4244: '=': conversion from 'int' to 'char', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(61,21): warning C4127: conditional expression is constant
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(61,21):
10>    consider using 'if constexpr' statement instead
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(175,46): warning C4267: 'argument': conversion from 'size_t' to '_Ty', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(175,46): warning C4267:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(175,46): warning C4267:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(175,46): warning C4267:             _Ty=int
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(175,46): warning C4267:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(191,63): warning C4267: 'argument': conversion from 'size_t' to '_Ty', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(191,63): warning C4267:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(191,63): warning C4267:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(191,63): warning C4267:             _Ty=int
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(191,63): warning C4267:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(219,42): warning C4267: 'argument': conversion from 'size_t' to '_Ty', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(219,42): warning C4267:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(219,42): warning C4267:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(219,42): warning C4267:             _Ty=int
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(219,42): warning C4267:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(223,59): warning C4267: 'argument': conversion from 'size_t' to '_Ty', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(223,59): warning C4267:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(223,59): warning C4267:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(223,59): warning C4267:             _Ty=int
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\MshLoader.cpp(223,59): warning C4267:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(95,9): warning C4244: 'initializing': conversion from 'double' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(96,9): warning C4244: 'initializing': conversion from 'double' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(104,37): warning C4244: 'argument': conversion from 'double' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(104,25): warning C4244: 'argument': conversion from 'double' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(113,26): warning C4244: 'argument': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(167,40): warning C4244: '=': conversion from 'float' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(172,41): warning C4244: '=': conversion from 'float' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(95,9): warning C4244: 'initializing': conversion from 'double' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(96,9): warning C4244: 'initializing': conversion from 'double' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(104,37): warning C4244: 'argument': conversion from 'double' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(104,25): warning C4244: 'argument': conversion from 'double' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(113,26): warning C4244: 'argument': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(723,51): warning C4244: 'argument': conversion from 'double' to 'const float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(723,41): warning C4244: 'argument': conversion from 'double' to 'const float', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(167,40): warning C4244: '=': conversion from 'float' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(172,41): warning C4244: '=': conversion from 'float' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(723,31): warning C4244: 'argument': conversion from 'double' to 'const float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(827,25): warning C4244: 'argument': conversion from 'float' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(826,25): warning C4244: 'argument': conversion from 'float' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(825,30): warning C4244: 'argument': conversion from 'float' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(824,30): warning C4244: 'argument': conversion from 'float' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(821,51): warning C4244: 'argument': conversion from 'float' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(821,32): warning C4244: 'argument': conversion from 'float' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(839,65): warning C4244: 'argument': conversion from 'int' to 'const float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(840,65): warning C4244: 'argument': conversion from 'int' to 'const float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(882,18): warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1160,46): warning C4244: 'argument': conversion from 'double' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1160,34): warning C4244: 'argument': conversion from 'double' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1169,47): warning C4244: 'argument': conversion from 'int' to 'const float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1169,45): warning C4244: 'argument': conversion from 'int' to 'const float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1217,15): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1219,25): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1231,15): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1233,25): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1288,20): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1290,36): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1300,20): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1302,36): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1328,27): warning C4389: '==': signed/unsigned mismatch
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(723,51): warning C4244: 'argument': conversion from 'double' to 'const float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(723,41): warning C4244: 'argument': conversion from 'double' to 'const float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(723,31): warning C4244: 'argument': conversion from 'double' to 'const float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(827,25): warning C4244: 'argument': conversion from 'float' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(826,25): warning C4244: 'argument': conversion from 'float' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(825,30): warning C4244: 'argument': conversion from 'float' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(824,30): warning C4244: 'argument': conversion from 'float' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(821,51): warning C4244: 'argument': conversion from 'float' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(821,32): warning C4244: 'argument': conversion from 'float' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(839,65): warning C4244: 'argument': conversion from 'int' to 'const float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(840,65): warning C4244: 'argument': conversion from 'int' to 'const float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(882,18): warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1160,46): warning C4244: 'argument': conversion from 'double' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1160,34): warning C4244: 'argument': conversion from 'double' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1169,47): warning C4244: 'argument': conversion from 'int' to 'const float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1169,45): warning C4244: 'argument': conversion from 'int' to 'const float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1217,15): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1219,25): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1231,15): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1233,25): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1288,20): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1290,36): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1300,20): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1302,36): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1328,27): warning C4389: '==': signed/unsigned mismatch
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\main.cpp(131,36): warning C4100: 'v': unreferenced parameter
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\main.cpp(162,22): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\main.cpp(166,21): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\main.cpp(12,14): warning C4100: 'argc': unreferenced parameter
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\main.cpp(131,36): warning C4100: 'v': unreferenced parameter
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\polygon_corners.cpp(59,18): warning C4244: '=': conversion from 'Eigen::Index' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\polygon_corners.cpp(59,18):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\read_json.h(103,14):
11>        see reference to function template instantiation 'void igl::polygon_corners<Derived,Eigen::Matrix<int,-1,1,0,-1,1>,Eigen::Matrix<int,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\main.cpp(162,22): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\main.cpp(166,21): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\main.cpp(12,14): warning C4100: 'argc': unreferenced parameter
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(121,9): warning C4267: 'initializing': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(121,9):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\read_json.h(200,10):
11>        see reference to function template instantiation 'bool igl::list_to_matrix<int,Eigen::Matrix<int,-1,1,0,-1,1>>(const std::vector<int,std::allocator<int>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(126,35): warning C4127: conditional expression is constant
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(126,35):
11>    consider using 'if constexpr' statement instead
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(129,41): warning C4127: conditional expression is constant
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(129,41):
11>    consider using 'if constexpr' statement instead
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(139,33): warning C4127: conditional expression is constant
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(139,33):
11>    consider using 'if constexpr' statement instead
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\bind_vertex_attrib_array.cpp(64,25): warning C4244: 'argument': conversion from 'Eigen::Index' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\bind_vertex_attrib_array.cpp(64,25):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\MeshGL.cpp(113,3):
11>        see reference to function template instantiation 'GLint igl::opengl::bind_vertex_attrib_array<float,-1,-1>(const GLuint,const std::string &,GLuint,const Eigen::Matrix<float,-1,-1,1,-1,-1> &,const bool)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\bind_vertex_attrib_array.cpp(64,15): warning C4244: 'argument': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\bind_vertex_attrib_array.cpp(64,15): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\bind_vertex_attrib_array.cpp(64,15): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\bind_vertex_attrib_array.cpp(64,15): warning C4244:             Derived=Eigen::Matrix<float,-1,-1,1,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\bind_vertex_attrib_array.cpp(64,15): warning C4244:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\polygon_corners.cpp(59,18): warning C4244: '=': conversion from 'Eigen::Index' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\polygon_corners.cpp(59,18):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\read_json.h(103,14):
10>        see reference to function template instantiation 'void igl::polygon_corners<Derived,Eigen::Matrix<int,-1,1,0,-1,1>,Eigen::Matrix<int,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(121,9): warning C4267: 'initializing': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(121,9):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\read_json.h(200,10):
10>        see reference to function template instantiation 'bool igl::list_to_matrix<int,Eigen::Matrix<int,-1,1,0,-1,1>>(const std::vector<int,std::allocator<int>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(126,35): warning C4127: conditional expression is constant
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(126,35):
10>    consider using 'if constexpr' statement instead
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(129,41): warning C4127: conditional expression is constant
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(129,41):
10>    consider using 'if constexpr' statement instead
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(139,33): warning C4127: conditional expression is constant
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(139,33):
10>    consider using 'if constexpr' statement instead
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\bind_vertex_attrib_array.cpp(64,25): warning C4244: 'argument': conversion from 'Eigen::Index' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\bind_vertex_attrib_array.cpp(64,25):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\MeshGL.cpp(113,3):
10>        see reference to function template instantiation 'GLint igl::opengl::bind_vertex_attrib_array<float,-1,-1>(const GLuint,const std::string &,GLuint,const Eigen::Matrix<float,-1,-1,1,-1,-1> &,const bool)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\bind_vertex_attrib_array.cpp(64,15): warning C4244: 'argument': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\bind_vertex_attrib_array.cpp(64,15): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\bind_vertex_attrib_array.cpp(64,15): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\bind_vertex_attrib_array.cpp(64,15): warning C4244:             Derived=Eigen::Matrix<float,-1,-1,1,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\bind_vertex_attrib_array.cpp(64,15): warning C4244:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\ortho.cpp(21,15): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\ortho.cpp(21,15):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(154,7):
11>        see reference to function template instantiation 'void igl::ortho<Eigen::Matrix<float,4,4,0,4,4>>(const float,const float,const float,const float,const float,const float,Eigen::PlainObjectBase<Eigen::Matrix<float,4,4,0,4,4>> &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\ortho.cpp(22,15): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\ortho.cpp(23,16): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\frustum.cpp(20,28): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\frustum.cpp(20,28):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(160,7):
11>        see reference to function template instantiation 'void igl::frustum<Eigen::Matrix<float,4,4,0,4,4>>(const float,const float,const float,const float,const float,const float,Eigen::PlainObjectBase<Eigen::Matrix<float,4,4,0,4,4>> &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\frustum.cpp(21,28): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\frustum.cpp(26,38): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\ortho.cpp(21,15): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\ortho.cpp(21,15):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(154,7):
10>        see reference to function template instantiation 'void igl::ortho<Eigen::Matrix<float,4,4,0,4,4>>(const float,const float,const float,const float,const float,const float,Eigen::PlainObjectBase<Eigen::Matrix<float,4,4,0,4,4>> &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\ortho.cpp(22,15): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\ortho.cpp(23,16): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\frustum.cpp(20,28): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\frustum.cpp(20,28):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerCore.cpp(160,7):
10>        see reference to function template instantiation 'void igl::frustum<Eigen::Matrix<float,4,4,0,4,4>>(const float,const float,const float,const float,const float,const float,Eigen::PlainObjectBase<Eigen::Matrix<float,4,4,0,4,4>> &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\frustum.cpp(21,28): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\frustum.cpp(26,38): warning C4244: '=': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\writeOBJ.cpp(33,21): warning C4996: 'fopen': This function or variable may be unsafe. Consider using fopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\writeOBJ.cpp(33,21):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(500,19):
11>        see reference to function template instantiation 'bool igl::writeOBJ<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const std::string,const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\writeOBJ.cpp(33,21): warning C4996: 'fopen': This function or variable may be unsafe. Consider using fopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\writeOBJ.cpp(33,21):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(500,19):
10>        see reference to function template instantiation 'bool igl::writeOBJ<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const std::string,const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\two_axis_valuator_fixed_up.cpp(27,62): warning C4244: 'argument': conversion from 'double' to 'const float', possible loss of data
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\two_axis_valuator_fixed_up.cpp(27,62):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(820,20):
11>        see reference to function template instantiation 'void igl::two_axis_valuator_fixed_up<float,float>(const int,const int,const double,const Eigen::Quaternion<float,0> &,const int,const int,const int,const int,Eigen::Quaternion<float,0> &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\two_axis_valuator_fixed_up.cpp(31,35): warning C4456: declaration of 'axis' hides previous local declaration
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\two_axis_valuator_fixed_up.cpp(23,33):
11>    see declaration of 'axis'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\two_axis_valuator_fixed_up.cpp(36,52): warning C4244: 'argument': conversion from 'double' to 'const float', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\two_axis_valuator_fixed_up.cpp(27,62): warning C4244: 'argument': conversion from 'double' to 'const float', possible loss of data
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\two_axis_valuator_fixed_up.cpp(27,62):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(820,20):
10>        see reference to function template instantiation 'void igl::two_axis_valuator_fixed_up<float,float>(const int,const int,const double,const Eigen::Quaternion<float,0> &,const int,const int,const int,const int,Eigen::Quaternion<float,0> &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\two_axis_valuator_fixed_up.cpp(31,35): warning C4456: declaration of 'axis' hides previous local declaration
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\two_axis_valuator_fixed_up.cpp(23,33):
10>    see declaration of 'axis'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\two_axis_valuator_fixed_up.cpp(36,52): warning C4244: 'argument': conversion from 'double' to 'const float', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(106,23): warning C4244: 'argument': conversion from 'const double' to 'const Q_type', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(106,23): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(106,23): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(106,23): warning C4244:             Q_type=float
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(106,23): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(106,23):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1189,10):
11>        see reference to function template instantiation 'bool igl::snap_to_canonical_view_quat<float,float>(const Eigen::Quaternion<float,0> &,const double,Eigen::Quaternion<float,0> &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(106,23): warning C4244: 'argument': conversion from 'const double' to 'const Q_type', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(106,23): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(106,23): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(106,23): warning C4244:             Q_type=float
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(106,23): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(106,23):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1189,10):
10>        see reference to function template instantiation 'bool igl::snap_to_canonical_view_quat<float,float>(const Eigen::Quaternion<float,0> &,const double,Eigen::Quaternion<float,0> &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\json.hpp(1941,61): warning C4127: conditional expression is constant
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\json.hpp(1941,61):
11>    consider using 'if constexpr' statement instead
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\json.hpp(1941,61):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\json.hpp(2103,73):
11>        while compiling class template member function 'std::shared_ptr<nlohmann::detail::input_adapter_protocol>::shared_ptr(std::shared_ptr<_Ty2> &&) noexcept'
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\json.hpp(2103,73):
11>        while processing the default template argument of 'std::shared_ptr<nlohmann::detail::input_adapter_protocol>::shared_ptr(std::shared_ptr<_Ty2> &&) noexcept'
11>        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.44.35207\include\memory(1648,88):
11>        see reference to class template instantiation 'std::_SP_pointer_compatible<nlohmann::detail::wide_string_input_adapter<std::u32string>,nlohmann::detail::input_adapter_protocol>' being compiled
11>        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.44.35207\include\memory(1501,62):
11>        see reference to class template instantiation 'std::is_convertible<_Yty *,_Ty *>' being compiled
11>        with
11>        [
11>            _Yty=nlohmann::detail::wide_string_input_adapter<std::u32string>,
11>            _Ty=nlohmann::detail::input_adapter_protocol
11>        ]
11>        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.44.35207\include\type_traits(323,39):
11>        see reference to class template instantiation 'nlohmann::detail::wide_string_input_adapter<std::u32string>' being compiled
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\json.hpp(1936,38):
11>        while compiling class template member function 'int nlohmann::detail::wide_string_input_adapter<std::u32string>::get_character(void) noexcept'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\json.hpp(1941,61): warning C4127: conditional expression is constant
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\json.hpp(1941,61):
10>    consider using 'if constexpr' statement instead
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\json.hpp(1941,61):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\json.hpp(2103,73):
10>        while compiling class template member function 'std::shared_ptr<nlohmann::detail::input_adapter_protocol>::shared_ptr(std::shared_ptr<_Ty2> &&) noexcept'
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\json.hpp(2103,73):
10>        while processing the default template argument of 'std::shared_ptr<nlohmann::detail::input_adapter_protocol>::shared_ptr(std::shared_ptr<_Ty2> &&) noexcept'
10>        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.44.35207\include\memory(1648,88):
10>        see reference to class template instantiation 'std::_SP_pointer_compatible<nlohmann::detail::wide_string_input_adapter<std::u32string>,nlohmann::detail::input_adapter_protocol>' being compiled
10>        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.44.35207\include\memory(1501,62):
10>        see reference to class template instantiation 'std::is_convertible<_Yty *,_Ty *>' being compiled
10>        with
10>        [
10>            _Yty=nlohmann::detail::wide_string_input_adapter<std::u32string>,
10>            _Ty=nlohmann::detail::input_adapter_protocol
10>        ]
10>        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.44.35207\include\type_traits(323,39):
10>        see reference to class template instantiation 'nlohmann::detail::wide_string_input_adapter<std::u32string>' being compiled
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\json.hpp(1936,38):
10>        while compiling class template member function 'int nlohmann::detail::wide_string_input_adapter<std::u32string>::get_character(void) noexcept'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(22,9): warning C4267: 'initializing': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(22,9):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\read_json.h(89,19):
11>        see reference to function template instantiation 'bool igl::readOBJ<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const std::string,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(315,22):
11>        see reference to function template instantiation 'bool igl::list_to_matrix<double,Eigen::Matrix<double,-1,-1,0,-1,-1>>(const std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(22,9): warning C4267: 'initializing': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(22,9):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\read_json.h(89,19):
10>        see reference to function template instantiation 'bool igl::readOBJ<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const std::string,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(315,22):
10>        see reference to function template instantiation 'bool igl::list_to_matrix<double,Eigen::Matrix<double,-1,-1,0,-1,-1>>(const std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\adjacency_matrix.cpp(21,37): warning C4459: declaration of 'Index' hides global declaration
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\eigen-src\Eigen\src\Core\util\Meta.h(74,40):
11>    see declaration of 'Eigen::Index'
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\adjacency_matrix.cpp(21,37):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\read_json.h(105,14):
11>        see reference to function template instantiation 'void igl::edges<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\edges.cpp(20,8):
11>        see reference to function template instantiation 'void igl::adjacency_matrix<Derived,igl::edges::Index>(const Eigen::MatrixBase<Derived> &,Eigen::SparseMatrix<igl::edges::Index,0,int> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\edges.cpp(55,24): warning C4244: '=': conversion from 'Eigen::Index' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\edges.cpp(55,24):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\edges.cpp(21,8):
11>        see reference to function template instantiation 'void igl::edges<igl::edges::Index,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::SparseMatrix<igl::edges::Index,0,int> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\edges.cpp(56,24): warning C4244: '=': conversion from 'Eigen::Index' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\adjacency_matrix.cpp(21,37): warning C4459: declaration of 'Index' hides global declaration
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\eigen-src\Eigen\src\Core\util\Meta.h(74,40):
10>    see declaration of 'Eigen::Index'
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\adjacency_matrix.cpp(21,37):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\read_json.h(105,14):
10>        see reference to function template instantiation 'void igl::edges<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\edges.cpp(20,8):
10>        see reference to function template instantiation 'void igl::adjacency_matrix<Derived,igl::edges::Index>(const Eigen::MatrixBase<Derived> &,Eigen::SparseMatrix<igl::edges::Index,0,int> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\edges.cpp(55,24): warning C4244: '=': conversion from 'Eigen::Index' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\edges.cpp(55,24):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\edges.cpp(21,8):
10>        see reference to function template instantiation 'void igl::edges<igl::edges::Index,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::SparseMatrix<igl::edges::Index,0,int> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\edges.cpp(56,24): warning C4244: '=': conversion from 'Eigen::Index' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_face_normals.cpp(22,13): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_face_normals.cpp(22,13): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_face_normals.cpp(22,13): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_face_normals.cpp(22,13): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_face_normals.cpp(22,13): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_face_normals.cpp(22,13):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(519,10):
11>        see reference to function template instantiation 'void igl::per_face_normals<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,-1,0,-1,-1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Derived> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_face_normals.cpp(46,10):
11>        see reference to function template instantiation 'void igl::per_face_normals<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,3,1,0,3,1>,Eigen::Matrix<double,-1,-1,0,-1,-1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const Eigen::MatrixBase<Eigen::Matrix<double,3,1,0,3,1>> &,Eigen::PlainObjectBase<Derived> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_face_normals.cpp(22,13): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_face_normals.cpp(22,13): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_face_normals.cpp(22,13): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_face_normals.cpp(22,13): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_face_normals.cpp(22,13): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_face_normals.cpp(22,13):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(519,10):
10>        see reference to function template instantiation 'void igl::per_face_normals<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,-1,0,-1,-1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Derived> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_face_normals.cpp(46,10):
10>        see reference to function template instantiation 'void igl::per_face_normals<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,3,1,0,3,1>,Eigen::Matrix<double,-1,-1,0,-1,-1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const Eigen::MatrixBase<Eigen::Matrix<double,3,1,0,3,1>> &,Eigen::PlainObjectBase<Derived> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(109,17): warning C4996: 'fopen': This function or variable may be unsafe. Consider using fopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(109,17):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(446,17):
11>        see reference to function template instantiation 'bool igl::read_triangle_mesh<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const std::string,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(68,10):
11>        see reference to function template instantiation 'bool igl::read_triangle_mesh<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const std::string,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,std::string &,std::string &,std::string &,std::string &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(121,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(121,23): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(121,23): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(121,23): warning C4244:             Q_type=float
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(121,23): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(121,23):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(808,20):
11>        see reference to function template instantiation 'void igl::trackball<float,float>(const double,const double,const double,const Eigen::Quaternion<float,0> &,const double,const double,const double,const double,Eigen::Quaternion<float,0> &)' being compiled
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(148,10):
11>        see reference to function template instantiation 'void igl::trackball<float>(const double,const double,const Q_type,const Q_type *,const double,const double,const double,const double,Q_type *)' being compiled
11>        with
11>        [
11>            Q_type=float
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(122,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(122,23): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(122,23): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(122,23): warning C4244:             Q_type=float
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(122,23): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(123,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(123,23): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(123,23): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(123,23): warning C4244:             Q_type=float
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(123,23): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(124,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(124,23): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(124,23): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(124,23): warning C4244:             Q_type=float
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(124,23): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(128,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(128,23): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(128,23): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(128,23): warning C4244:             Q_type=float
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(128,23): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(129,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(129,23): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(129,23): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(129,23): warning C4244:             Q_type=float
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(129,23): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(130,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(130,23): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(130,23): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(130,23): warning C4244:             Q_type=float
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(130,23): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(131,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(131,23): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(131,23): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(131,23): warning C4244:             Q_type=float
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(131,23): warning C4244:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(109,17): warning C4996: 'fopen': This function or variable may be unsafe. Consider using fopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(109,17):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(446,17):
10>        see reference to function template instantiation 'bool igl::read_triangle_mesh<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const std::string,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(68,10):
10>        see reference to function template instantiation 'bool igl::read_triangle_mesh<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const std::string,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,std::string &,std::string &,std::string &,std::string &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(121,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(121,23): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(121,23): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(121,23): warning C4244:             Q_type=float
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(121,23): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(121,23):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(808,20):
10>        see reference to function template instantiation 'void igl::trackball<float,float>(const double,const double,const double,const Eigen::Quaternion<float,0> &,const double,const double,const double,const double,Eigen::Quaternion<float,0> &)' being compiled
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(148,10):
10>        see reference to function template instantiation 'void igl::trackball<float>(const double,const double,const Q_type,const Q_type *,const double,const double,const double,const double,Q_type *)' being compiled
10>        with
10>        [
10>            Q_type=float
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(122,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(122,23): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(122,23): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(122,23): warning C4244:             Q_type=float
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(122,23): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(123,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(123,23): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(123,23): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(123,23): warning C4244:             Q_type=float
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(123,23): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(124,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(124,23): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(124,23): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(124,23): warning C4244:             Q_type=float
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(124,23): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(128,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(128,23): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(128,23): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(128,23): warning C4244:             Q_type=float
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(128,23): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(129,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(129,23): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(129,23): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(129,23): warning C4244:             Q_type=float
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(129,23): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(130,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(130,23): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(130,23): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(130,23): warning C4244:             Q_type=float
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(130,23): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(131,23): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(131,23): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(131,23): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(131,23): warning C4244:             Q_type=float
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\trackball.cpp(131,23): warning C4244:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:             Derived=Eigen::Matrix<float,3,1,0,3,1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(839,39):
11>        see reference to function template instantiation 'Eigen::Matrix<float,3,1,0,3,1> igl::unproject<float>(const Eigen::Matrix<float,3,1,0,3,1> &,const Eigen::Matrix<float,4,4,0,4,4> &,const Eigen::Matrix<float,4,4,0,4,4> &,const Eigen::Matrix<float,4,1,0,4,1> &)' being compiled
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(65,3):
11>        see reference to function template instantiation 'void igl::unproject<Derived,Eigen::Matrix<float,4,4,0,4,4>,Eigen::Matrix<float,4,4,0,4,4>,Eigen::Matrix<float,4,1,0,4,1>,Eigen::Matrix<float,3,1,0,3,1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,4,0,4,4>> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,4,0,4,4>> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,1,0,4,1>> &,Eigen::PlainObjectBase<Derived> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<float,3,1,0,3,1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:             Derived=Eigen::Matrix<float,3,1,0,3,1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:             Derived=Eigen::Matrix<float,3,1,0,3,1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(839,39):
10>        see reference to function template instantiation 'Eigen::Matrix<float,3,1,0,3,1> igl::unproject<float>(const Eigen::Matrix<float,3,1,0,3,1> &,const Eigen::Matrix<float,4,4,0,4,4> &,const Eigen::Matrix<float,4,4,0,4,4> &,const Eigen::Matrix<float,4,1,0,4,1> &)' being compiled
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(65,3):
10>        see reference to function template instantiation 'void igl::unproject<Derived,Eigen::Matrix<float,4,4,0,4,4>,Eigen::Matrix<float,4,4,0,4,4>,Eigen::Matrix<float,4,1,0,4,1>,Eigen::Matrix<float,3,1,0,3,1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,4,0,4,4>> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,4,0,4,4>> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,1,0,4,1>> &,Eigen::PlainObjectBase<Derived> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<float,3,1,0,3,1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:             Derived=Eigen::Matrix<float,3,1,0,3,1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(48,31): warning C4305: 'initializing': truncation from 'double' to 'float'
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(48,31):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1189,10):
11>        see reference to function template instantiation 'bool igl::snap_to_canonical_view_quat<float,float>(const Eigen::Quaternion<float,0> &,const double,Eigen::Quaternion<float,0> &)' being compiled
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(105,10):
11>        see reference to function template instantiation 'bool igl::snap_to_canonical_view_quat<float>(const Q_type *,const Q_type,Q_type *)' being compiled
11>        with
11>        [
11>            Q_type=float
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(63,61): warning C4244: '+=': conversion from 'double' to 'float', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(92,22): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(92,22): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(92,22): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(92,22): warning C4244:             Q_type=float
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(92,22): warning C4244:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(48,31): warning C4305: 'initializing': truncation from 'double' to 'float'
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(48,31):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\glfw\Viewer.cpp(1189,10):
10>        see reference to function template instantiation 'bool igl::snap_to_canonical_view_quat<float,float>(const Eigen::Quaternion<float,0> &,const double,Eigen::Quaternion<float,0> &)' being compiled
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(105,10):
10>        see reference to function template instantiation 'bool igl::snap_to_canonical_view_quat<float>(const Q_type *,const Q_type,Q_type *)' being compiled
10>        with
10>        [
10>            Q_type=float
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(63,61): warning C4244: '+=': conversion from 'double' to 'float', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(92,22): warning C4244: '=': conversion from 'double' to 'Q_type', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(92,22): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(92,22): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(92,22): warning C4244:             Q_type=float
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\snap_to_canonical_view_quat.cpp(92,22): warning C4244:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(170,22): warning C4267: 'return': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(170,22):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(308,23):
11>        see reference to function template instantiation 'bool igl::readOBJ<double,int>(const std::string,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &)' being compiled
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(41,15):
11>        see reference to function template instantiation 'bool igl::readOBJ<double,int>(FILE *,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &,std::vector<std::tuple<std::string,int,int>,std::allocator<std::tuple<std::string,int,int>>> &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(174,22): warning C4267: 'return': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(178,22): warning C4267: 'return': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(108,8): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(131,9): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(150,9): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(186,15): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(192,14): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(197,20): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(201,20): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(205,20): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(245,9): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\colormap.cpp(1621,22): warning C4244: 'initializing': conversion from 'double' to 'unsigned int', possible loss of data
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\colormap.cpp(1621,22):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(284,10):
11>        see reference to function template instantiation 'void igl::colormap<Derived,Eigen::Matrix<double,-1,-1,0,-1,-1>>(const igl::ColorMapType,const Eigen::MatrixBase<Derived> &,const double,const double,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,1,0,-1,1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\colormap.cpp(1659,3):
11>        see reference to function template instantiation 'void igl::colormap<double>(const igl::ColorMapType,const T,T &,T &,T &)' being compiled
11>        with
11>        [
11>            T=double
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\colormap.cpp(1585,7):
11>        see reference to function template instantiation 'void igl::colormap<T>(const double [][3],const T,T &,T &,T &)' being compiled
11>        with
11>        [
11>            T=double
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\colormap.cpp(1622,21): warning C4244: 'initializing': conversion from 'double' to 'unsigned int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,25): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,25): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,25): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,25): warning C4244:             Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,25): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,25):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(520,10):
11>        see reference to function template instantiation 'void igl::per_vertex_normals<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Derived,Eigen::Matrix<double,-1,-1,0,-1,-1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_vertex_normals.cpp(119,5):
11>        see reference to function template instantiation 'void igl::per_vertex_normals<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Derived,Eigen::Matrix<double,-1,-1,0,-1,-1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::PerVertexNormalsWeightingType,const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_vertex_normals.cpp(65,7):
11>        see reference to function template instantiation 'void igl::doublearea<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,17): warning C4244:             Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(53,56): warning C4267: 'argument': conversion from 'size_t' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(170,22): warning C4267: 'return': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(170,22):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(308,23):
10>        see reference to function template instantiation 'bool igl::readOBJ<double,int>(const std::string,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &)' being compiled
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(41,15):
10>        see reference to function template instantiation 'bool igl::readOBJ<double,int>(FILE *,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &,std::vector<std::tuple<std::string,int,int>,std::allocator<std::tuple<std::string,int,int>>> &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(174,22): warning C4267: 'return': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(178,22): warning C4267: 'return': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(108,8): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(131,9): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(150,9): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(186,15): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(192,14): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(197,20): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(201,20): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(205,20): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOBJ.cpp(245,9): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\colormap.cpp(1621,22): warning C4244: 'initializing': conversion from 'double' to 'unsigned int', possible loss of data
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\colormap.cpp(1621,22):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(284,10):
10>        see reference to function template instantiation 'void igl::colormap<Derived,Eigen::Matrix<double,-1,-1,0,-1,-1>>(const igl::ColorMapType,const Eigen::MatrixBase<Derived> &,const double,const double,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,1,0,-1,1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\colormap.cpp(1659,3):
10>        see reference to function template instantiation 'void igl::colormap<double>(const igl::ColorMapType,const T,T &,T &,T &)' being compiled
10>        with
10>        [
10>            T=double
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\colormap.cpp(1585,7):
10>        see reference to function template instantiation 'void igl::colormap<T>(const double [][3],const T,T &,T &,T &)' being compiled
10>        with
10>        [
10>            T=double
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\colormap.cpp(1622,21): warning C4244: 'initializing': conversion from 'double' to 'unsigned int', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(65,39): warning C4267: 'argument': conversion from 'size_t' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,25): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,25): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,25): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,25): warning C4244:             Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,25): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,25):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\opengl\ViewerData.cpp(520,10):
10>        see reference to function template instantiation 'void igl::per_vertex_normals<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Derived,Eigen::Matrix<double,-1,-1,0,-1,-1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_vertex_normals.cpp(119,5):
10>        see reference to function template instantiation 'void igl::per_vertex_normals<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Derived,Eigen::Matrix<double,-1,-1,0,-1,-1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::PerVertexNormalsWeightingType,const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_vertex_normals.cpp(65,7):
10>        see reference to function template instantiation 'void igl::doublearea<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,17): warning C4244:             Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(25,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(53,56): warning C4267: 'argument': conversion from 'size_t' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(65,39): warning C4267: 'argument': conversion from 'size_t' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:             Derived=Eigen::Matrix<float,1,3,1,1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(65,3):
11>        see reference to function template instantiation 'void igl::unproject<Derived,Eigen::Matrix<float,4,4,0,4,4>,Eigen::Matrix<float,4,4,0,4,4>,Eigen::Matrix<float,4,1,0,4,1>,Eigen::Matrix<float,3,1,0,3,1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,4,0,4,4>> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,4,0,4,4>> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,1,0,4,1>> &,Eigen::PlainObjectBase<Derived> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<float,3,1,0,3,1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(31,5):
11>        see reference to function template instantiation 'void igl::unproject<Derived,Eigen::Matrix<float,4,4,0,4,4>,Eigen::Matrix<float,4,4,0,4,4>,Eigen::Matrix<float,4,1,0,4,1>,Eigen::Matrix<float,1,3,1,1,3>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,4,0,4,4>> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,4,0,4,4>> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,1,0,4,1>> &,Eigen::PlainObjectBase<Derived> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<float,1,3,1,1,3>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:             Derived=Eigen::Matrix<float,1,3,1,1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:             Derived=Eigen::Matrix<float,1,3,1,1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,25):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(65,3):
10>        see reference to function template instantiation 'void igl::unproject<Derived,Eigen::Matrix<float,4,4,0,4,4>,Eigen::Matrix<float,4,4,0,4,4>,Eigen::Matrix<float,4,1,0,4,1>,Eigen::Matrix<float,3,1,0,3,1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,4,0,4,4>> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,4,0,4,4>> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,1,0,4,1>> &,Eigen::PlainObjectBase<Derived> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<float,3,1,0,3,1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(31,5):
10>        see reference to function template instantiation 'void igl::unproject<Derived,Eigen::Matrix<float,4,4,0,4,4>,Eigen::Matrix<float,4,4,0,4,4>,Eigen::Matrix<float,4,1,0,4,1>,Eigen::Matrix<float,1,3,1,1,3>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,4,0,4,4>> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,4,0,4,4>> &,const Eigen::MatrixBase<Eigen::Matrix<float,4,1,0,4,1>> &,Eigen::PlainObjectBase<Derived> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<float,1,3,1,1,3>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:             Derived=Eigen::Matrix<float,1,3,1,1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unproject.cpp(36,15): warning C4244:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,27): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,27): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,27): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,27): warning C4244:             Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,27): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,27):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\read_json.h(149,14):
11>        see reference to function template instantiation 'void igl::massmatrix<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::MassMatrixType,Eigen::SparseMatrix<double,0,int> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(133,78):
11>        see reference to class template instantiation 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(108,17):
11>        while compiling class template member function 'void igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::MassMatrixType,Eigen::SparseMatrix<double,0,int> &)'
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>            C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(133,85):
11>            see the first reference to 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute' in 'igl::massmatrix'
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(117,58):
11>        see reference to class template instantiation 'igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,4>' being compiled
11>        with
11>        [
11>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
11>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
11>            Scalar=double
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(48,17):
11>        while compiling class template member function 'void igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,4>::compute(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::MassMatrixType,Eigen::SparseMatrix<double,0,int> &)'
11>        with
11>        [
11>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
11>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
11>            Scalar=double,
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>            C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(117,65):
11>            see the first reference to 'igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,4>::compute' in 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute'
11>        with
11>        [
11>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
11>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
11>            Scalar=double
11>        ]
11>        and
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>            C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(133,85):
11>            see the first reference to 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute' in 'igl::massmatrix'
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,19): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,19): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,19): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,19): warning C4244:             Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,19): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,27): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,27): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,27): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,27): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,27): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,19): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,19): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,19): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,19): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,19): warning C4244:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,27): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,27): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,27): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,27): warning C4244:             Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,27): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,27):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\include\read_json.h(149,14):
10>        see reference to function template instantiation 'void igl::massmatrix<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::MassMatrixType,Eigen::SparseMatrix<double,0,int> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(133,78):
10>        see reference to class template instantiation 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(108,17):
10>        while compiling class template member function 'void igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::MassMatrixType,Eigen::SparseMatrix<double,0,int> &)'
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>            C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(133,85):
10>            see the first reference to 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute' in 'igl::massmatrix'
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(117,58):
10>        see reference to class template instantiation 'igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,4>' being compiled
10>        with
10>        [
10>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
10>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
10>            Scalar=double
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(48,17):
10>        while compiling class template member function 'void igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,4>::compute(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::MassMatrixType,Eigen::SparseMatrix<double,0,int> &)'
10>        with
10>        [
10>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
10>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
10>            Scalar=double,
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>            C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(117,65):
10>            see the first reference to 'igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,4>::compute' in 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute'
10>        with
10>        [
10>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
10>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
10>            Scalar=double
10>        ]
10>        and
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>            C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(133,85):
10>            see the first reference to 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute' in 'igl::massmatrix'
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,19): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,19): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,19): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,19): warning C4244:             Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(54,19): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,27): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,27): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,27): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,27): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,27): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,19): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,19): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,19): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,19): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(55,19): warning C4244:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(48,6): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(48,6):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(68,10):
11>        see reference to function template instantiation 'bool igl::read_triangle_mesh<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const std::string,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,std::string &,std::string &,std::string &,std::string &)' being compiled
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(116,12):
11>        see reference to function template instantiation 'bool igl::read_triangle_mesh<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const std::string &,FILE *,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(160,9):
11>        see reference to function template instantiation 'bool igl::readOFF<double,int>(FILE *,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(72,3): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(85,8): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(113,9): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(116,7): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(132,8): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(140,11): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(142,11): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(150,14): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(153,7): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readWRL.cpp(58,19): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readWRL.cpp(58,19):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(176,9):
11>        see reference to function template instantiation 'bool igl::readWRL<double,int>(FILE *,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readWRL.cpp(94,19): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(48,6): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(48,6):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(68,10):
10>        see reference to function template instantiation 'bool igl::read_triangle_mesh<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const std::string,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,std::string &,std::string &,std::string &,std::string &)' being compiled
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(116,12):
10>        see reference to function template instantiation 'bool igl::read_triangle_mesh<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const std::string &,FILE *,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(160,9):
10>        see reference to function template instantiation 'bool igl::readOFF<double,int>(FILE *,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(72,3): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(85,8): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(113,9): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(116,7): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(132,8): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(140,11): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(142,11): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(150,14): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readOFF.cpp(153,7): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readWRL.cpp(58,19): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readWRL.cpp(58,19):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(176,9):
10>        see reference to function template instantiation 'bool igl::readWRL<double,int>(FILE *,std::vector<std::vector<double,std::allocator<double>>,std::allocator<std::vector<double,std::allocator<double>>>> &,std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readWRL.cpp(94,19): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,34): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,34): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,34): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,34): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,34): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,34):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(101,7):
11>        see reference to function template instantiation 'void igl::boundary_facets<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(115,10):
11>        see reference to function template instantiation 'void igl::boundary_facets<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,1,0,-1,1>,Eigen::Matrix<int,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,26): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,26): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,26): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,26): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,26): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(88,40): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(88,18): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(80,3): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(80,3):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(138,9):
11>        see reference to function template instantiation 'bool igl::readMESH<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(FILE *,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(90,11): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(100,5): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(106,15): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(109,9): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(120,15): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(131,17): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(144,15): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(156,17): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(169,15): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(181,17): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(195,15): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(207,17): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\polygon_corners.cpp(28,18): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\polygon_corners.cpp(28,18):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(193,12):
11>        see reference to function template instantiation 'void igl::polygon_corners<int,Eigen::Matrix<int,-1,1,0,-1,1>,Eigen::Matrix<int,-1,1,0,-1,1>>(const std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,34): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,34): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,34): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,34): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,34): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,34):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(101,7):
10>        see reference to function template instantiation 'void igl::boundary_facets<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(115,10):
10>        see reference to function template instantiation 'void igl::boundary_facets<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,1,0,-1,1>,Eigen::Matrix<int,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,26): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,26): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,26): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,26): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(32,26): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(88,40): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(88,18): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(80,3): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(80,3):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(138,9):
10>        see reference to function template instantiation 'bool igl::readMESH<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(FILE *,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(90,11): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(100,5): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(106,15): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(109,9): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(120,15): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(131,17): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(144,15): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(156,17): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(169,15): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(181,17): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(195,15): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readMESH.cpp(207,17): warning C4996: 'fscanf': This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\polygon_corners.cpp(28,18): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\polygon_corners.cpp(28,18):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(193,12):
10>        see reference to function template instantiation 'void igl::polygon_corners<int,Eigen::Matrix<int,-1,1,0,-1,1>,Eigen::Matrix<int,-1,1,0,-1,1>>(const std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,23): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,23): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,23): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,23): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,23): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,23):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(48,17):
11>        while compiling class template member function 'void igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,4>::compute(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::MassMatrixType,Eigen::SparseMatrix<double,0,int> &)'
11>        with
11>        [
11>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
11>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
11>            Scalar=double,
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>            C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(117,65):
11>            see the first reference to 'igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,4>::compute' in 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute'
11>        with
11>        [
11>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
11>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
11>            Scalar=double
11>        ]
11>        and
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>            C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(133,85):
11>            see the first reference to 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute' in 'igl::massmatrix'
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(61,7):
11>        see reference to function template instantiation 'void igl::volume<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,15): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,15): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,15): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,15): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,15): warning C4244:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,23): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,23): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,23): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,23): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,23): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,23):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(48,17):
10>        while compiling class template member function 'void igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,4>::compute(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::MassMatrixType,Eigen::SparseMatrix<double,0,int> &)'
10>        with
10>        [
10>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
10>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
10>            Scalar=double,
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>            C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(117,65):
10>            see the first reference to 'igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,4>::compute' in 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute'
10>        with
10>        [
10>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
10>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
10>            Scalar=double
10>        ]
10>        and
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>            C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(133,85):
10>            see the first reference to 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute' in 'igl::massmatrix'
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(61,7):
10>        see reference to function template instantiation 'void igl::volume<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,15): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,15): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,15): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,15): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\volume.cpp(21,15): warning C4244:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,23): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,23): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,23): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,23): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,23): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,23):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_vertex_normals.cpp(65,7):
11>        see reference to function template instantiation 'void igl::doublearea<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(71,7):
11>        see reference to function template instantiation 'void igl::edge_lengths<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,3,0,-1,3>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,3,0,-1,3>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\edge_lengths.cpp(17,12):
11>        see reference to function template instantiation 'void igl::squared_edge_lengths<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,3,0,-1,3>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,3,0,-1,3>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,15): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,15): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,15): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,15): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,15): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:             Derived=Eigen::Matrix<double,-1,3,0,-1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(72,14):
11>        see reference to function template instantiation 'void igl::doublearea<Derived,Eigen::Matrix<double,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,const double,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,3,0,-1,3>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(162,8):
11>        see reference to function template instantiation 'void igl::sort<Derived,Eigen::Matrix<double,-1,3,0,-1,3>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,3,0,-1,3>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:             Derived=Eigen::Matrix<double,-1,3,0,-1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(74,30): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(78,30): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\parallel_for.h(132,62): warning C4244: 'argument': conversion from 'igl::doublearea::Index' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\parallel_for.h(132,62):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(168,3):
11>        see reference to function template instantiation 'bool igl::parallel_for<igl::doublearea::Index,igl::doublearea::<lambda_1>>(const Index,const FunctionType &,const size_t)' being compiled
11>        with
11>        [
11>            Index=igl::doublearea::Index,
11>            FunctionType=igl::doublearea::<lambda_1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_rows.cpp(35,34): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_rows.cpp(35,34):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(115,10):
11>        see reference to function template instantiation 'void igl::boundary_facets<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,1,0,-1,1>,Eigen::Matrix<int,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(84,10):
11>        see reference to function template instantiation 'void igl::unique_rows<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,1,0,-1,1>,Eigen::Matrix<int,-1,1,0,-1,1>>(const Eigen::DenseBase<Derived> &,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_rows.cpp(35,22): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_rows.cpp(36,34): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_rows.cpp(36,22): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_rows.cpp(75,35): warning C4267: 'initializing': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_rows.cpp(75,25): warning C4267: 'initializing': conversion from 'size_t' to 'const int', possible loss of data
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,23): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,23): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,23): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,23): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,23): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,23):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\per_vertex_normals.cpp(65,7):
10>        see reference to function template instantiation 'void igl::doublearea<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(71,7):
10>        see reference to function template instantiation 'void igl::edge_lengths<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,3,0,-1,3>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,3,0,-1,3>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\edge_lengths.cpp(17,12):
10>        see reference to function template instantiation 'void igl::squared_edge_lengths<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,3,0,-1,3>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,3,0,-1,3>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,15): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,15): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,15): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,15): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\squared_edge_lengths.cpp(19,15): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:             Derived=Eigen::Matrix<double,-1,3,0,-1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(72,14):
10>        see reference to function template instantiation 'void igl::doublearea<Derived,Eigen::Matrix<double,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,const double,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,3,0,-1,3>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(162,8):
10>        see reference to function template instantiation 'void igl::sort<Derived,Eigen::Matrix<double,-1,3,0,-1,3>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,3,0,-1,3>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:             Derived=Eigen::Matrix<double,-1,3,0,-1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(74,30): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(78,30): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\parallel_for.h(132,62): warning C4244: 'argument': conversion from 'igl::doublearea::Index' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\parallel_for.h(132,62):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(168,3):
10>        see reference to function template instantiation 'bool igl::parallel_for<igl::doublearea::Index,igl::doublearea::<lambda_1>>(const Index,const FunctionType &,const size_t)' being compiled
10>        with
10>        [
10>            Index=igl::doublearea::Index,
10>            FunctionType=igl::doublearea::<lambda_1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_rows.cpp(35,34): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_rows.cpp(35,34):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(115,10):
10>        see reference to function template instantiation 'void igl::boundary_facets<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,1,0,-1,1>,Eigen::Matrix<int,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(84,10):
10>        see reference to function template instantiation 'void igl::unique_rows<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,1,0,-1,1>,Eigen::Matrix<int,-1,1,0,-1,1>>(const Eigen::DenseBase<Derived> &,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_rows.cpp(35,22): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_rows.cpp(36,34): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_rows.cpp(36,22): warning C4244: 'initializing': conversion from 'Eigen::Index' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_rows.cpp(75,35): warning C4267: 'initializing': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_rows.cpp(75,25): warning C4267: 'initializing': conversion from 'size_t' to 'const int', possible loss of data
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(84,13):
11>        see reference to function template instantiation 'void igl::voronoi_mass<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\voronoi_mass.cpp(58,5):
11>        see reference to function template instantiation 'void igl::circumradius<Derived,Eigen::Matrix<int,-1,3,0,-1,3>,Eigen::Matrix<double,-1,1,0,-1,1>,Eigen::Matrix<double,-1,3,0,-1,3>,Eigen::Matrix<double,-1,3,0,-1,3>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,3,0,-1,3>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,3,0,-1,3>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,3,0,-1,3>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(84,13):
10>        see reference to function template instantiation 'void igl::voronoi_mass<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\voronoi_mass.cpp(58,5):
10>        see reference to function template instantiation 'void igl::circumradius<Derived,Eigen::Matrix<int,-1,3,0,-1,3>,Eigen::Matrix<double,-1,1,0,-1,1>,Eigen::Matrix<double,-1,3,0,-1,3>,Eigen::Matrix<double,-1,3,0,-1,3>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,3,0,-1,3>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,3,0,-1,3>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,3,0,-1,3>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,13): warning C4189: 'ss': local variable is initialized but not referenced
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(48,13): warning C4189: 'VCOLS': local variable is initialized but not referenced
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\voronoi_mass.cpp(73,5):
11>        see reference to function template instantiation 'void igl::circumradius<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,1,0,-1,1>,Eigen::Matrix<double,-1,3,0,-1,3>,Eigen::Matrix<double,-1,4,0,-1,4>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,3,0,-1,3>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,4,0,-1,4>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,13): warning C4189: 'ss': local variable is initialized but not referenced
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(48,13): warning C4189: 'VCOLS': local variable is initialized but not referenced
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,24):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\voronoi_mass.cpp(73,5):
10>        see reference to function template instantiation 'void igl::circumradius<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,1,0,-1,1>,Eigen::Matrix<double,-1,3,0,-1,3>,Eigen::Matrix<double,-1,4,0,-1,4>>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,3,0,-1,3>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,4,0,-1,4>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\circumradius.cpp(50,16): warning C4244:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,23): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,23): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,23): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,23): warning C4244:             Derived=Eigen::Matrix<int,12,3,0,12,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,23): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,23):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\voronoi_mass.cpp(129,14):
11>        see reference to function template instantiation 'void igl::centroid<Derived,Eigen::Matrix<int,12,3,0,12,3>,Eigen::Matrix<double,1,3,1,1,3>,igl::voronoi_mass::Scalar>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,12,3,0,12,3>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,1,3,1,1,3>> &,Derivedvol &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<igl::voronoi_mass::Scalar,8,3,0,8,3>,
11>            Derivedvol=igl::voronoi_mass::Scalar
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,15): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,15): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,15): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,15): warning C4244:             Derived=Eigen::Matrix<int,12,3,0,12,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,15): warning C4244:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,23): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,23): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,23): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,23): warning C4244:             Derived=Eigen::Matrix<int,12,3,0,12,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,23): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,23):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\voronoi_mass.cpp(129,14):
10>        see reference to function template instantiation 'void igl::centroid<Derived,Eigen::Matrix<int,12,3,0,12,3>,Eigen::Matrix<double,1,3,1,1,3>,igl::voronoi_mass::Scalar>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,12,3,0,12,3>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,1,3,1,1,3>> &,Derivedvol &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<igl::voronoi_mass::Scalar,8,3,0,8,3>,
10>            Derivedvol=igl::voronoi_mass::Scalar
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,15): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,15): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,15): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,15): warning C4244:             Derived=Eigen::Matrix<int,12,3,0,12,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\centroid.cpp(25,15): warning C4244:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,23): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,23): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,23): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,23): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,23): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,23):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(115,58):
11>        see reference to class template instantiation 'igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,3>' being compiled
11>        with
11>        [
11>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
11>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
11>            Scalar=double
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(31,17):
11>        while compiling class template member function 'void igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,3>::compute(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::MassMatrixType,Eigen::SparseMatrix<double,0,int> &)'
11>        with
11>        [
11>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
11>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
11>            Scalar=double,
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>            C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(115,65):
11>            see the first reference to 'igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,3>::compute' in 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute'
11>        with
11>        [
11>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
11>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
11>            Scalar=double
11>        ]
11>        and
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>            C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(133,85):
11>            see the first reference to 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute' in 'igl::massmatrix'
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(41,14):
11>        see reference to function template instantiation 'void igl::massmatrix_intrinsic<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::MassMatrixType,Eigen::SparseMatrix<double,0,int> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,3,0,-1,3>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(25,10):
11>        see reference to function template instantiation 'void igl::massmatrix_intrinsic<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::MassMatrixType,const int,Eigen::SparseMatrix<double,0,int> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,3,0,-1,3>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,15): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,15): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,15): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,15): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,15): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,34): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,34): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,34): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,34): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,34): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,26): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,26): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,26): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,26): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,26): warning C4244:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,23): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,23): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,23): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,23): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,23): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,23):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(115,58):
10>        see reference to class template instantiation 'igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,3>' being compiled
10>        with
10>        [
10>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
10>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
10>            Scalar=double
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(31,17):
10>        while compiling class template member function 'void igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,3>::compute(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::MassMatrixType,Eigen::SparseMatrix<double,0,int> &)'
10>        with
10>        [
10>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
10>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
10>            Scalar=double,
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>            C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(115,65):
10>            see the first reference to 'igl::MassMatrixHelper<DerivedV,DerivedF,Scalar,3>::compute' in 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute'
10>        with
10>        [
10>            DerivedV=Eigen::Matrix<double,-1,-1,0,-1,-1>,
10>            DerivedF=Eigen::Matrix<int,-1,-1,0,-1,-1>,
10>            Scalar=double
10>        ]
10>        and
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>            C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(133,85):
10>            see the first reference to 'igl::MassMatrixHelper<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double,-1>::compute' in 'igl::massmatrix'
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix.cpp(41,14):
10>        see reference to function template instantiation 'void igl::massmatrix_intrinsic<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::MassMatrixType,Eigen::SparseMatrix<double,0,int> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,3,0,-1,3>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(25,10):
10>        see reference to function template instantiation 'void igl::massmatrix_intrinsic<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,double>(const Eigen::MatrixBase<Derived> &,const Eigen::MatrixBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,const igl::MassMatrixType,const int,Eigen::SparseMatrix<double,0,int> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,3,0,-1,3>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,15): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,15): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,15): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,15): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(39,15): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,34): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,34): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,34): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,34): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,34): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,26): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'const int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,26): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,26): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,26): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\massmatrix_intrinsic.cpp(40,26): warning C4244:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:             Derived=Eigen::Matrix<double,-1,3,0,-1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(162,8):
11>        see reference to function template instantiation 'void igl::sort<Derived,Eigen::Matrix<double,-1,3,0,-1,3>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,3,0,-1,3>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(37,19):
11>        see reference to function template instantiation 'void igl::sort2<Derived,Eigen::Matrix<double,-1,3,0,-1,3>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,3,0,-1,3>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:             Derived=Eigen::Matrix<double,-1,3,0,-1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(182,38): warning C4459: declaration of 'Index' hides global declaration
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\eigen-src\Eigen\src\Core\util\Meta.h(74,40):
11>    see declaration of 'Eigen::Index'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:             Derived=Eigen::Matrix<double,-1,3,0,-1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(39,19):
11>        see reference to function template instantiation 'void igl::sort3<Derived,Eigen::Matrix<double,-1,3,0,-1,3>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<double,-1,3,0,-1,3>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:             Derived=Eigen::Matrix<double,-1,3,0,-1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(228,38): warning C4459: declaration of 'Index' hides global declaration
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\eigen-src\Eigen\src\Core\util\Meta.h(74,40):
11>    see declaration of 'Eigen::Index'
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\parallel_for.h(157,15): warning C4018: '<': signed/unsigned mismatch
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\parallel_for.h(157,15):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(168,3):
11>        see reference to function template instantiation 'bool igl::parallel_for<igl::doublearea::Index,igl::doublearea::<lambda_1>>(const Index,const FunctionType &,const size_t)' being compiled
11>        with
11>        [
11>            Index=igl::doublearea::Index,
11>            FunctionType=igl::doublearea::<lambda_1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\parallel_for.h(133,10):
11>        see reference to function template instantiation 'bool igl::parallel_for<Index,igl::parallel_for::<lambda_1>,igl::parallel_for::<lambda_2>,igl::parallel_for::<lambda_1>>(const Index,const PreFunctionType &,const FunctionType &,const AccumFunctionType &,const size_t)' being compiled
11>        with
11>        [
11>            Index=igl::doublearea::Index,
11>            PreFunctionType=igl::parallel_for::<lambda_1>,
11>            FunctionType=igl::parallel_for::<lambda_2>,
11>            AccumFunctionType=igl::parallel_for::<lambda_1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(80,8):
11>        see reference to function template instantiation 'void igl::sort<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(92,10):
11>        see reference to function template instantiation 'void igl::sort<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:             Derived=Eigen::Matrix<double,-1,3,0,-1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(162,8):
10>        see reference to function template instantiation 'void igl::sort<Derived,Eigen::Matrix<double,-1,3,0,-1,3>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,3,0,-1,3>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(37,19):
10>        see reference to function template instantiation 'void igl::sort2<Derived,Eigen::Matrix<double,-1,3,0,-1,3>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,3,0,-1,3>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:             Derived=Eigen::Matrix<double,-1,3,0,-1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(182,38): warning C4459: declaration of 'Index' hides global declaration
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\eigen-src\Eigen\src\Core\util\Meta.h(74,40):
10>    see declaration of 'Eigen::Index'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:             Derived=Eigen::Matrix<double,-1,3,0,-1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(39,19):
10>        see reference to function template instantiation 'void igl::sort3<Derived,Eigen::Matrix<double,-1,3,0,-1,3>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<double,-1,3,0,-1,3>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:             Derived=Eigen::Matrix<double,-1,3,0,-1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(228,38): warning C4459: declaration of 'Index' hides global declaration
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\eigen-src\Eigen\src\Core\util\Meta.h(74,40):
10>    see declaration of 'Eigen::Index'
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\parallel_for.h(157,15): warning C4018: '<': signed/unsigned mismatch
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\parallel_for.h(157,15):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\doublearea.cpp(168,3):
10>        see reference to function template instantiation 'bool igl::parallel_for<igl::doublearea::Index,igl::doublearea::<lambda_1>>(const Index,const FunctionType &,const size_t)' being compiled
10>        with
10>        [
10>            Index=igl::doublearea::Index,
10>            FunctionType=igl::doublearea::<lambda_1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\parallel_for.h(133,10):
10>        see reference to function template instantiation 'bool igl::parallel_for<Index,igl::parallel_for::<lambda_1>,igl::parallel_for::<lambda_2>,igl::parallel_for::<lambda_1>>(const Index,const PreFunctionType &,const FunctionType &,const AccumFunctionType &,const size_t)' being compiled
10>        with
10>        [
10>            Index=igl::doublearea::Index,
10>            PreFunctionType=igl::parallel_for::<lambda_1>,
10>            FunctionType=igl::parallel_for::<lambda_2>,
10>            AccumFunctionType=igl::parallel_for::<lambda_1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\boundary_facets.cpp(80,8):
10>        see reference to function template instantiation 'void igl::sort<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(92,10):
10>        see reference to function template instantiation 'void igl::sort<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(59,9): warning C4267: 'initializing': conversion from 'size_t' to 'int', possible loss of data
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(59,9):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(170,9):
11>        see reference to function template instantiation 'bool igl::readSTL<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,-1,0,-1,-1>>(FILE *,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &)' being compiled
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(311,10):
11>        see reference to function template instantiation 'bool igl::readSTL<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,-1,0,-1,-1>>(std::istream &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &)' being compiled
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(34,8):
11>        see reference to function template instantiation 'bool igl::list_to_matrix<double,3,Eigen::Matrix<double,-1,-1,0,-1,-1>>(const std::vector<std::array<double,3>,std::allocator<std::array<double,3>>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\voronoi_mass.cpp(49,10):
11>        see reference to function template instantiation 'void igl::unique_simplices<Derived,Eigen::Matrix<int,-1,3,0,-1,3>,Eigen::Matrix<int,-1,1,0,-1,1>,Eigen::Matrix<int,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,3,0,-1,3>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_simplices.cpp(35,8):
11>        see reference to function template instantiation 'void igl::sort<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,3,0,-1,3>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(59,9): warning C4267: 'initializing': conversion from 'size_t' to 'int', possible loss of data
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\list_to_matrix.cpp(59,9):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\read_triangle_mesh.cpp(170,9):
10>        see reference to function template instantiation 'bool igl::readSTL<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,-1,0,-1,-1>>(FILE *,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &)' being compiled
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(311,10):
10>        see reference to function template instantiation 'bool igl::readSTL<Eigen::Matrix<double,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<double,-1,-1,0,-1,-1>>(std::istream &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &)' being compiled
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(34,8):
10>        see reference to function template instantiation 'bool igl::list_to_matrix<double,3,Eigen::Matrix<double,-1,-1,0,-1,-1>>(const std::vector<std::array<double,3>,std::allocator<std::array<double,3>>> &,Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>> &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(30,17):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\voronoi_mass.cpp(49,10):
10>        see reference to function template instantiation 'void igl::unique_simplices<Derived,Eigen::Matrix<int,-1,3,0,-1,3>,Eigen::Matrix<int,-1,1,0,-1,1>,Eigen::Matrix<int,-1,1,0,-1,1>>(const Eigen::MatrixBase<Derived> &,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,1,0,-1,1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,3,0,-1,3>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_simplices.cpp(35,8):
10>        see reference to function template instantiation 'void igl::sort<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,3,0,-1,3>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(43,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(92,10):
11>        see reference to function template instantiation 'void igl::sort<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(37,19):
11>        see reference to function template instantiation 'void igl::sort2<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(39,19):
11>        see reference to function template instantiation 'void igl::sort3<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(97,16): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(97,16):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(30,8):
11>        see reference to function template instantiation 'bool igl::readSTL<double,int,double>(std::istream &,std::vector<std::array<double,3>,std::allocator<std::array<double,3>>> &,std::vector<std::array<int,3>,std::allocator<std::array<int,3>>> &,std::vector<std::array<double,3>,std::allocator<std::array<double,3>>> &)' being compiled
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(296,15):
11>        see reference to function template instantiation 'bool igl::read_stl_ascii<double,int,double>(std::istream &,std::vector<std::array<double,3>,std::allocator<std::array<double,3>>> &,std::vector<std::array<int,3>,std::allocator<std::array<int,3>>> &,std::vector<std::array<double,3>,std::allocator<std::array<double,3>>> &)' being compiled
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(110,16): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(138,18): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(92,10):
10>        see reference to function template instantiation 'void igl::sort<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(37,19):
10>        see reference to function template instantiation 'void igl::sort2<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_simplices.cpp(35,8):
11>        see reference to function template instantiation 'void igl::sort<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,3,0,-1,3>
11>        ]
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(37,19):
11>        see reference to function template instantiation 'void igl::sort2<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,3,0,-1,3>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
11>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17):
11>    the template instantiation context (the oldest one first) is
11>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(39,19):
11>        see reference to function template instantiation 'void igl::sort3<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
11>        with
11>        [
11>            Derived=Eigen::Matrix<int,-1,3,0,-1,3>
11>        ]
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         with
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         [
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
11>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         ]
11>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(39,19):
10>        see reference to function template instantiation 'void igl::sort3<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Derived> &,Eigen::PlainObjectBase<Derived> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:             Derived=Eigen::Matrix<int,-1,-1,0,-1,-1>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(97,16): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(97,16):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(30,8):
10>        see reference to function template instantiation 'bool igl::readSTL<double,int,double>(std::istream &,std::vector<std::array<double,3>,std::allocator<std::array<double,3>>> &,std::vector<std::array<int,3>,std::allocator<std::array<int,3>>> &,std::vector<std::array<double,3>,std::allocator<std::array<double,3>>> &)' being compiled
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(296,15):
10>        see reference to function template instantiation 'bool igl::read_stl_ascii<double,int,double>(std::istream &,std::vector<std::array<double,3>,std::allocator<std::array<double,3>>> &,std::vector<std::array<int,3>,std::allocator<std::array<int,3>>> &,std::vector<std::array<double,3>,std::allocator<std::array<double,3>>> &)' being compiled
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(110,16): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\readSTL.cpp(138,18): warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(178,17):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\unique_simplices.cpp(35,8):
10>        see reference to function template instantiation 'void igl::sort<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,3,0,-1,3>
10>        ]
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(37,19):
10>        see reference to function template instantiation 'void igl::sort2<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,3,0,-1,3>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(180,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>    C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(224,17):
10>    the template instantiation context (the oldest one first) is
10>        C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(39,19):
10>        see reference to function template instantiation 'void igl::sort3<Derived,Eigen::Matrix<int,-1,-1,0,-1,-1>,Eigen::Matrix<int,-1,-1,0,-1,-1>>(const Eigen::DenseBase<Derived> &,const int,const bool,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &,Eigen::PlainObjectBase<Eigen::Matrix<int,-1,-1,0,-1,-1>> &)' being compiled
10>        with
10>        [
10>            Derived=Eigen::Matrix<int,-1,3,0,-1,3>
10>        ]
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244: 'initializing': conversion from 'Eigen::EigenBase<Derived>::Index' to 'int', possible loss of data
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         with
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         [
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:             Derived=Eigen::Matrix<int,-1,3,0,-1,3>
10>C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\_deps\libigl-src\include\igl\sort.cpp(226,17): warning C4244:         ]
10>(compiling source file '../main.cpp')
10>masssprings_sparse.vcxproj -> C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\masssprings_sparse.exe
10>Done building project "masssprings_sparse.vcxproj".
11>masssprings_dense.vcxproj -> C:\Users\halst\U of T\Year 4\Fall\CSC317\showcase\build\Debug\masssprings_dense.exe
11>Done building project "masssprings_dense.vcxproj".
12>------ Build started: Project: ALL_BUILD, Configuration: Debug x64 ------
12>Building Custom Rule C:/Users/halst/U of T/Year 4/Fall/CSC317/showcase/CMakeLists.txt
13>------ Skipped Build: Project: INSTALL, Configuration: Debug x64 ------
13>Project not selected to build for this solution configuration 
========== Build: 12 succeeded, 0 failed, 0 up-to-date, 1 skipped ==========
========== Build completed at 8:42 PM and took 49.571 seconds ==========
