#include "Fashi.h"
// FaShi::FaShi(const FaShi &source):Hero(source){}
FaShi::FaShi(std::string name,int hp,int power,int defence):Hero(name,hp,power,defence){}
void FaShi::makeMagic(Hero hero)
{
    std::cout << "法师" + this->getName() + "对" + hero.getName() + "使用了一次魔法\n";
    hero.set_hp(hero.getHP()>>1);
    this->set_hp(this->getHP() + hero.getHP());
}