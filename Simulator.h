//
// Created by mobile on 13/01/22.
//

#ifndef PARTICLESIMULATOR_SIMULATOR_H
#define PARTICLESIMULATOR_SIMULATOR_H

#include <vector>
#include <memory>
#include <chrono>
#include "Box.h"
#include "Particle.h"
#include "ParticleDynamics.h"
#include "Renderer.h"
#include "ParticleGenerator.h"

class Simulator {

private:
    int timeSteps_;
    float stepSize_; // (milliseconds) fraction of time covered in a single step
    ParticleDynamics dynamics_;
    Renderer renderer_;
    ParticleGenerator generator_;

public:

    std::shared_ptr<Box> box_;

    Simulator(float stepsize, std::vector<vec2d> boxCoords, int numParticles);

    // Computes a single step of the simulation
    void run();

    // Renders the particles on to the GUI
    void render(std::shared_ptr<Box> box);
};


#endif //PARTICLESIMULATOR_SIMULATOR_H
