//
// Created by ibrahim on 13/01/22.
//

#include "Box.h"
#include "Particle.h"
#include "Simulator.h"
#include "Renderer.h"
#include <memory>

int main()
{

//    Box box = Box({0, 20}, {20,0});
    vec2d c1{0,20}, c2{20,0};

    auto box = std::make_shared<Box>(c1, c2);

    CircleParticle p = CircleParticle({100,100},5,{2,0});

    box->addParticle(p);

    Simulator s(40);

    s.step(box);
}