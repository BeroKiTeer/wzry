#include "Hero.h"
#include <string>
#include <iostream>
Hero::Hero(std::string name,int hp,int power,int defence):name(name),hp(hp),power(power),defence(defence){}
void Hero::attack(Hero hero)
{
    if (this->getHP() > 0 && hero.hp > 0) {
            int temp = this->getPower() - hero.defence;
            if (temp > 0) {
                std::cout << (this->getName() + "攻击了" + hero.name + "一下\n");
                hero.hp -= temp;
                if (hero.hp < 0) {
                    hero.hp = 0;
                }
            }
        }
}
void Hero::sayHello()
{
    std::cout << "我是" << this->getName() << "，hp=" << this->getHP() << "，power=" << this->getPower() << "，defence=" << this->getDefence() << std::endl;
}
void Hero::sayGoodbye()
{
    std::cout << "青山常在，绿水长流，我" + this->getName() + "还会再回来的！\n";
}