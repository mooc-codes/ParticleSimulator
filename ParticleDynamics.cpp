//
// Created by mobile on 13/01/22.
//

#include "ParticleDynamics.h"
#include <iostream>
#include <math.h>

void ParticleDynamics::checkBoxCollision(std::shared_ptr<Box> box)
{
    for(auto &p : box->particles_)
    {
        if (p->rightEnd() >= box->rightEnd || p->leftEnd() <= box->leftEnd)
            p->Velocity({p->Velocity()[0] * -1, p->Velocity()[1]});

        else if (p->topEnd() >= box->topEnd || p->bottomEnd() <= box->bottomEnd)
            p->Velocity({p->Velocity()[0], p->Velocity()[1] * -1});
    }
}

void ParticleDynamics::checkParticleCollision(std::shared_ptr<Box> box)
{
    double center_dist=0;
    double c1, c2;
    for( auto &p : box->particles_)
    {
        c1 = p->Center()[0];
        c2 = p->Center()[1];

        for(auto &q : box->particles_)
        {
            if(p->ID() != q->ID())
            {
                auto xd = pow((c1 - q->Center()[0]),2);
                auto yd = pow((c2 - q->Center()[1]),2);
                center_dist =  sqrt(xd + yd);
                if (center_dist <= (p->Radius() + q->Radius()) *0.9)
                {
                    //collision
                }
            }
        }
    }
}
