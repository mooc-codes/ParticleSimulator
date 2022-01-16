//
// Created by ibrahim on 13/01/22.
//

#include "Box.h"
#include "Simulator.h"

int main()
{

    // create box rectangle
    vec2d c1{5,400}, c2{400,5};

    Simulator s(16, {c1,c2},15);

    s.run();
}