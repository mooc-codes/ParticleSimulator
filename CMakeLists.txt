cmake_minimum_required(VERSION 3.20)
project(ParticleSimulator)

set(CMAKE_CXX_STANDARD 14)

find_package(Eigen3 REQUIRED NO_MODULE)

find_package(OpenCV 4.1 REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIBRARY_DIRS})
add_definitions(${OpenCV_DEFINITIONS})


#add_library(ParticleSimulator SHARED Particle.cpp)

add_executable(simulator main.cpp Particle.cpp Box.cpp Renderer.cpp)
target_link_libraries (simulator Eigen3::Eigen ${OpenCV_LIBRARIES} )
