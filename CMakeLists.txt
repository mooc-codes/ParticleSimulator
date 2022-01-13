cmake_minimum_required(VERSION 3.20)
project(ParticleSimulator)

set(CMAKE_CXX_STANDARD 14)

find_package(Eigen3 REQUIRED NO_MODULE)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS} src)

#add_library(ParticleSimulator SHARED Particle.cpp)

add_executable(simulator main.cpp Particle.cpp Box.cpp Renderer.cpp)
string(STRIP ${SDL2_LIBRARIES} SDL2_LIBRARIES)
target_link_libraries (simulator Eigen3::Eigen ${SDL2_LIBRARIES} )
