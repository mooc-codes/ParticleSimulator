//
// Created by mobile on 13/01/22.
//

#ifndef PARTICLEDYNAMICS_H
#define PARTICLEDYNAMICS_H

#include <vector>
#include <thread>

#include "Box.h"

class ParticleDynamics {

private:
    std::vector<std::thread> threads_;

public:

    ParticleDynamics()=default;

    void checkBoxCollision(std::shared_ptr<Box> box);

    void checkParticleCollision(std::shared_ptr<Box> box);

    void resolveCollisions(std::shared_ptr<Box> box);

};


#endif //PARTICLEDYNAMICS_H
