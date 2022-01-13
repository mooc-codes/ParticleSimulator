//
// Created by ibrahim on 13/01/22.
//

#include "Particle.h"

int BaseParticle::idCnt_ = 0;

CircleParticle::CircleParticle(vec2d center, float radius, vec2d velocity={0,0})
{
    this->center_ = center;
    this->radius_ = radius;
    position_ = center;
    velocity_ = velocity;

}

void CircleParticle::Radius(int r) {radius_ = r;}
// TODO : return const reference to eliminate copy;
int CircleParticle::Radius() {return  radius_;}

void CircleParticle::Center(vec2d c) {center_ = c;}
// TODO : return const reference to eliminate copy;
vec2d CircleParticle::Center() {return center_;}

float CircleParticle::leftEnd() {return center_[0] - radius_;}
float CircleParticle::rightEnd() {return center_[0] + radius_;}
float CircleParticle::topEnd() {return center_[1] - radius_; }
float CircleParticle::bottomEnd() {return center_[1] + radius_;}

