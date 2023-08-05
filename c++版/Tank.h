#ifndef TANK_H
#define TANK_H
#include "hero.h"
class Tank:public Hero
{
public:
    Tank(const Tank &source);
    Tank(std::string name,int hp,int power,int defence);
    ~Tank() = default;
private:
};


#endif