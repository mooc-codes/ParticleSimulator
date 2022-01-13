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

class Simulator {

private:
    int timeSteps_;
    float stepSize_; // (milliseconds) fraction of time covered in a single step
    ParticleDynamics dynamics_;

public:

    Simulator(float stepsize):timeSteps_(0), stepSize_(stepsize)
    {
        dynamics_ = ParticleDynamics();
    }

    // Computes a single step of the simulation
    void step(std::shared_ptr<Box> box);

    // Renders the particles on to the GUI
    void render();
};


#endif //PARTICLESIMULATOR_SIMULATOR_H
