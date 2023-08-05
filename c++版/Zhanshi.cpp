#include "ZhanShi.h"
ZhanShi::ZhanShi(const ZhanShi &source):Hero(source){}
ZhanShi::ZhanShi(std::string name,int hp,int power,int defence):Hero(name,hp,power,defence){}