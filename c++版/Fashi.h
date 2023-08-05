#ifndef FASHI_H
#define FASHI_H
#include "hero.h"
class FaShi:public Hero
{
public:
    FaShi(std::string name,int hp,int power,int defence);
    // FaShi(const FaShi &source);
    ~FaShi()=default;
    void makeMagic(Hero hero);

};

#endif