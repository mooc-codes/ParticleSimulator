//
// Created by ibrahim on 13/01/22.
//

#include "Particle.h"
#include <iostream>

int BaseParticle::idCnt_ = 0;

CircleParticle::CircleParticle(vec2d center, float radius, vec2d velocity)
{
    this->position_ = center;
    this->radius_ = radius;
    position_ = center;
    velocity_ = velocity;
    std::cout<<this->velocity_<< " vel "<<std::endl;

}

void CircleParticle::Radius(int r) {radius_ = r;}
// TODO : return const reference to eliminate copy;
int CircleParticle::Radius() {return  radius_;}

void CircleParticle::Center(vec2d c) {position_ = c;}
// TODO : return const reference to eliminate copy;
vec2d CircleParticle::Center() {return position_;}

float CircleParticle::leftEnd() {return position_[0] - radius_;}
float CircleParticle::rightEnd() {return position_[0] + radius_;}
float CircleParticle::topEnd() {return position_[1] - radius_; }
float CircleParticle::bottomEnd() {return position_[1] + radius_;}

void CircleParticle::simulate(int stepsize)
{
    // constant velocity is assumed
    float dt = (float) stepsize / 1000.0;
    position_ += velocity_ * dt;
}