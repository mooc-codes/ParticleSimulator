//
// Created by mobile on 13/01/22.
//

#include "ParticleDynamics.h"
#include <iostream>

void ParticleDynamics::checkBoxCollision(std::shared_ptr<Box> box)
{
    for(auto &p : box->particles_)
    {
//        std::cout<<p->rightEnd()<< " , "<<box->rightEnd<<std::endl;
        if (p->rightEnd() >= box->rightEnd || p->leftEnd() <= box->leftEnd) {
            p->Velocity({p->Velocity()[0] * -1, p->Velocity()[1]});
            std::cout << p->Velocity() << std::endl;
            std::cout<<p->rightEnd()<< " , "<<box->rightEnd<<std::endl;
        }
//        else if (p->topEnd() <= box->topEnd || p->bottomEnd() >= box->bottomEnd)
//            p->Velocity({p->Velocity()[0], p->Velocity()[1] * -1});
    }
}