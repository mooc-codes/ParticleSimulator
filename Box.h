//
// Created by ibrahim on 13/01/22.
//

#ifndef BOX_H
#define BOX_H

#include <vector>
#include <memory>
#include <Eigen/Dense>

#include "Particle.h"

typedef Eigen::Vector2d vec2d;


class Box {

private:

    // Representing the box using 2 point rectangle form to eliminate computations for edges;
    vec2d p1, p2;




public:
    float leftEnd, rightEnd, topEnd, bottomEnd;
    std::vector<std::unique_ptr<CircleParticle>> particles_;
    Box(vec2d p1, vec2d p2);


    void addParticle(vec2d Center, int radius, vec2d velocity, int mass, std::vector<int> color);

};


#endif //BOX_H
