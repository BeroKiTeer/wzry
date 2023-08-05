#include <iostream>
#include "Hero.cpp"
#include "Tank.cpp"
#include "ZhanShi.cpp"
#include "Fashi.cpp"
using namespace std;
int main ()
{
    ZhanShi lb("ÂÀ²¼",100,90,80);
    lb.sayHello();
    Tank cc("²Ü²Ù",120,90,60);
    cc.sayHello();
    lb.attack(cc);
    cc.sayHello();
    FaShi dc("õõ²õ",100,70,60);
    dc.sayHello();
    dc.attack(lb);
    dc.attack(cc);
    cc.sayHello();
    lb.sayHello();
    cc.sayHello();
    dc.makeMagic(lb);
    lb.sayHello();
    dc.sayHello();
    dc.sayGoodbye();
    cc.sayGoodbye();
    return 0;
}