//
// Created by mobile on 13/01/22.
//

#include "Simulator.h"

void Simulator::step(std::shared_ptr<Box> box)
{
    long timeSinceLastUpdate;
    std::chrono::time_point<std::chrono::system_clock> lastUpdate;

    lastUpdate = std::chrono::system_clock::now();

    if (timeSinceLastUpdate >= this->stepSize_) {

        timeSinceLastUpdate = std::chrono::duration_cast<std::chrono::milliseconds>
                (std::chrono::system_clock::now() - lastUpdate).count();

//        this->dynamics_.checkBoxCollision(box);
//        this->dynamics_.checkParticleCollision(box);
//        this->dynamics_.resolveCollisions(box);
//        this->render();
        lastUpdate = std::chrono::system_clock::now();
    }
}