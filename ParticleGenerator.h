//
// Created by mobile on 16/01/22.
//

#ifndef PARTICLESIMULATOR_PARTICLEGENERATOR_H
#define PARTICLESIMULATOR_PARTICLEGENERATOR_H

#include <random>

class ParticleGenerator
{

private:

    std::random_device device;
    std::uniform_int_distribution<> center_distribution;//
    std::uniform_int_distribution<> velocity_distribution;
    std::uniform_int_distribution<> radius_distribution;
    std::uniform_int_distribution<> mass_distribution;

public:



    ParticleGenerator() ;
    ~ParticleGenerator() = default;
    std::vector<int> Generate();
};

#endif //PARTICLESIMULATOR_PARTICLEGENERATOR_H
