//
// Created by mobile on 13/01/22.
//

#include "Simulator.h"

Simulator::Simulator(float stepsize, std::vector<vec2d> boxCoords, int numParticles):timeSteps_(0), stepSize_(stepsize)
{
    dynamics_ = ParticleDynamics();
    renderer_ = Renderer();
    box_ = std::make_shared<Box>(boxCoords[0], boxCoords[1]);
    CircleParticle p({100,100}, 5, {100, 0});
    box_->addParticle(p);
    // Add numParticle particles
}


void Simulator::run()
{
    long timeSinceLastUpdate;
    std::chrono::time_point<std::chrono::system_clock> lastUpdate;

    lastUpdate = std::chrono::system_clock::now();
    while(true) {
            // 40 ms delay is given by

            for(auto &p : box_->particles_)
            {
                p->simulate(stepSize_);

            }
        dynamics_.checkBoxCollision(box_);
        this->render(this->box_);
    }
}

void Simulator::render(std::shared_ptr<Box> box)
{
    this->renderer_.render(box, this->stepSize_);
}


