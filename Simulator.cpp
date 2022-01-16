//
// Created by mobile on 13/01/22.
//

#include "Simulator.h"


Simulator::Simulator(float stepsize, std::vector<vec2d> boxCoords, int numParticles):timeSteps_(0), stepSize_(stepsize)
{

    dynamics_ = ParticleDynamics();
    renderer_ = Renderer();
    box_ = std::make_shared<Box>(boxCoords[0], boxCoords[1]);

// Test particles
//    box_->addParticle({50,140}, 5, {100, 0},1);
//    box_->addParticle({200,140}, 10, {-100, 0},1);

    // Add numParticle particles
    ParticleGenerator p;
    for(int i=0; i < numParticles; i++)
    {
        auto data = generator_.Generate();
        box_->addParticle({data[0], data[1]}, data[2],{data[3], data[4]}, data[5]);
    }
}


void Simulator::run()
{
    long timeSinceLastUpdate;
    std::chrono::time_point<std::chrono::system_clock> lastUpdate;

    lastUpdate = std::chrono::system_clock::now();
    while(true) {
            // 40 ms delay is given by


        dynamics_.checkBoxCollision(box_);
        dynamics_.checkParticleCollision(box_);
        for(auto &p : box_->particles_)
        {
            p->simulate(stepSize_);

        }
        this->render(this->box_);
    }
}

void Simulator::render(std::shared_ptr<Box> box)
{
    this->renderer_.render(box, this->stepSize_);
}


