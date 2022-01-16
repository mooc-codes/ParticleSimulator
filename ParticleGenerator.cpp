//
// Created by mobile on 16/01/22.
//

#include "ParticleGenerator.h"

ParticleGenerator::ParticleGenerator() {

    center_distribution =  std::uniform_int_distribution<>(50,350);
    velocity_distribution = std::uniform_int_distribution<>(10, 200);
    radius_distribution = std::uniform_int_distribution<>(2,15);
    mass_distribution = std::uniform_int_distribution<>(1,15);

}

std::vector<int> ParticleGenerator::Generate()
{
    int center_x, center_y, radius, velocity_x, velocity_y, mass;
    std::mt19937 engine(device());
    mass = mass_distribution(engine);
    center_x = center_distribution(engine);
    center_y = center_distribution(engine);
    radius = radius_distribution(engine);
    velocity_x = velocity_distribution(engine);
    velocity_y = velocity_distribution(engine);

    return {center_x, center_y, radius, velocity_x, velocity_y, mass};
}
