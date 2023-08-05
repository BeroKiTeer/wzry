#include "Hero.h"
#include <string>
#include <iostream>
Hero::Hero(std::string name,int hp,int power,int defence):name(name),hp(hp),power(power),defence(defence){}
void Hero::attack(Hero hero)
{
    if (this->getHP() > 0 && hero.hp > 0) {
            int temp = this->getPower() - hero.defence;
            if (temp > 0) {
                std::cout << (this->getName() + "������" + hero.name + "һ��\n");
                hero.hp -= temp;
                if (hero.hp < 0) {
                    hero.hp = 0;
                }
            }
        }
}
void Hero::sayHello()
{
    std::cout << "����" << this->getName() << "��hp=" << this->getHP() << "��power=" << this->getPower() << "��defence=" << this->getDefence() << std::endl;
}
void Hero::sayGoodbye()
{
    std::cout << "��ɽ���ڣ���ˮ��������" + this->getName() + "�����ٻ����ģ�\n";
}