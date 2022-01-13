//
// Created by ibrahim on 13/01/22.
//

#include "Box.h"
#include "Particle.h"
#include "Simulator.h"
#include "Renderer.h"

int main()
{
    //assume 1px = 1mm;
    constexpr std::size_t kScreenWidth{600};
    constexpr std::size_t kScreenHeight{600};
    constexpr std::size_t kGridWidth{600};
    constexpr std::size_t kGridHeight{600};


    Box box = Box({0, 20}, {20,0});

    CircleParticle p = CircleParticle({10,10},2,{2,0});

    box.addParticle(p);
    SDL_Point p1;
    SDL_
    p1.x = p.Center()[0];
    p1.y = p.Center()[1];

    Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);

    while(true)
    {renderer.Render(p1);}
}