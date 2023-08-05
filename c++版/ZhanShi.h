#ifndef ZHANSHI_H
#define ZHANSHI_H
#include "Hero.h"
class ZhanShi:public Hero
{
public:
    ZhanShi(const ZhanShi &source);
    ZhanShi(std::string name,int hp,int power,int defence);
private:

};


#endif