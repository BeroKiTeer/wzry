#include "Fashi.h"
// FaShi::FaShi(const FaShi &source):Hero(source){}
FaShi::FaShi(std::string name,int hp,int power,int defence):Hero(name,hp,power,defence){}
void FaShi::makeMagic(Hero hero)
{
    std::cout << "��ʦ" + this->getName() + "��" + hero.getName() + "ʹ����һ��ħ��\n";
    hero.set_hp(hero.getHP()>>1);
    this->set_hp(this->getHP() + hero.getHP());
}