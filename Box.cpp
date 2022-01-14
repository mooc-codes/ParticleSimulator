//
// Created by ibrahim on 13/01/22.
//

#include "Box.h"

void Box::addParticle(vec2d center, int radius, vec2d velocity)
{
    particles_.emplace_back(std::make_unique<CircleParticle>(center, radius, velocity));
}

Box::Box(vec2d p1, vec2d p2)
{
    leftEnd = p1[0];
    rightEnd = p2[0];
    topEnd = p1[1];
    bottomEnd = p2[1];
}

