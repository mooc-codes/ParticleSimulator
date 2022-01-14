//
// Created by mobile on 13/01/22.
//

#ifndef PARTICLESIMULATOR_RENDERER_H
#define PARTICLESIMULATOR_RENDERER_H


#include <vector>
#include "SDL.h"

class Renderer {
public:
    Renderer(const std::size_t screen_width, const std::size_t screen_height,
             const std::size_t grid_width, const std::size_t grid_height);
    ~Renderer();

    void Render(SDL_Point const &food);

private:
    SDL_Window *sdl_window;
    SDL_Renderer *sdl_renderer;

    const std::size_t screen_width;
    const std::size_t screen_height;
    const std::size_t grid_width;
    const std::size_t grid_height;
};


#endif //PARTICLESIMULATOR_RENDERER_H
