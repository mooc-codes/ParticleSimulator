//
// Created by mobile on 13/01/22.
//

#include "Simulator.h"


void Simulator::step(std::shared_ptr<Box> box)
{
    long timeSinceLastUpdate;
    std::chrono::time_point<std::chrono::system_clock> lastUpdate;

    lastUpdate = std::chrono::system_clock::now();
    while(true) {
            // 40 ms delay is given by
            this->render(box);
    }
}

void Simulator::render(std::shared_ptr<Box> box)
{
    this->renderer_.render(box, this->stepSize_);
}


