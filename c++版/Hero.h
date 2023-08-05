#ifndef HERO_H
#define HERO_H
#include <iostream>
class Hero
{
public:
    Hero(std::string name,int hp,int power,int defence);
    void attack(Hero hero);
    void sayHello();
    void sayGoodbye();
    ~Hero() = default;

    //getter
    std::string getName() const
    {
        return this->name;
    }
    int getHP() const
    {
        return this->hp;
    }
    int getPower() const
    {
        return this->power;
    }
    int getDefence() const
    {
        return this->defence;
    }
    void set_name(const std::string &name) 
    {
        this->name = name; 
    }
    void set_hp(const int &hp) 
    {
        this->hp = hp; 
    }
    void set_power(const int &power) 
    {
        this->power = power; 
    }
    void set_defence(const int &defence) 
    {
        this->defence = defence; 
    }

private:
    std::string name;
    int hp;
    int power;
    int defence;
};


#endif