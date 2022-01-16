//
// Created by ibrahim on 13/01/22.
//

#ifndef PARTICLE_H
#define PARTICLE_H

#include <Eigen/Dense>

typedef Eigen::Vector2d vec2d;

class BaseParticle {

private:


protected:
    static int idCnt_;
    vec2d velocity_; // [vx, vy]
    vec2d position_; // [x,y]
    int mass_; // keeping as int , could very well be float
    int id_;

public :

    BaseParticle() { idCnt_++; };
    ~BaseParticle()= default;

    // TODO : return const reference to eliminate copy;sure that all virtual methods that are not pure are define
    vec2d Velocity(){return this->velocity_;}
    vec2d Position(){return this->position_;}

    void Velocity(vec2d v) {velocity_ = v;}
    void Position(vec2d p) {position_ = p;}

    void Mass(int mass){mass_ = mass;}
    int Mass(){return mass_;}

    // Physics
    virtual  void simulate(int timestep) = 0;

};


class CircleParticle : public  BaseParticle
{
private:

    int radius_;


public:
    CircleParticle(vec2d center, float radius, vec2d velocity, int mass);
    ~CircleParticle() = default;

    int ID();

    void Radius(int r);
    int Radius() ;

    void Center(vec2d c);
    vec2d Center();

    float leftEnd();
    float rightEnd();
    float topEnd();
    float bottomEnd();

    // Simulated movement based on constant acceleration motion model.
    void simulate(int stepsize) override;

};

#endif //PARTICLE_H
