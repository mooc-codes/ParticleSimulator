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

    vec2d c1{0,20}, c2{20,0};

    Simulator s(40, {c1,c2},1);

    s.step();
}