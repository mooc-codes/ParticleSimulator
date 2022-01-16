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

    // create box rectangle
    vec2d c1{0,400}, c2{400,0};

    Simulator s(16, {c1,c2},10);

    s.run();
}