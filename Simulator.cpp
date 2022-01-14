//
// Created by mobile on 13/01/22.
//

#include "Simulator.h"

Simulator::Simulator(float stepsize, std::vector<vec2d> boxCoords, int numParticles):timeSteps_(0), stepSize_(stepsize)
{
    dynamics_ = ParticleDynamics();
    renderer_ = Renderer();
    box_ = std::make_shared<Box>(boxCoords[0], boxCoords[1]);
    CircleParticle p({100,100}, 5, {10, 0});
    box_->addParticle(p);
    // Add numParticle particles
}


void Simulator::step()
{
    long timeSinceLastUpdate;
    std::chrono::time_point<std::chrono::system_clock> lastUpdate;

    lastUpdate = std::chrono::system_clock::now();
    while(true) {
            // 40 ms delay is given by
            this->render(this->box_);
            auto c1 = box_->particles_[0].Center()[0];
            auto c2 = box_->particles_[0].Center()[1];
            box_->particles_[0].Center({c1+2, c2});

    }
}

void Simulator::render(std::shared_ptr<Box> box)
{
    this->renderer_.render(box, this->stepSize_);
}


