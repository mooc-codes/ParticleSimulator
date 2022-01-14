//
// Created by ibrahim on 13/01/22.
//

#include "Box.h"

void Box::addParticle(CircleParticle particle)
{
    particles_.push_back(std::make_unique<CircleParticle>(particle.Center(), particle.Radius(), particle.Velocity()));
}

Box::Box(vec2d p1, vec2d p2)
{
    leftEnd = p1[0];
    rightEnd = p2[0];
    topEnd = p1[1];
    bottomEnd = p2[1];
}

