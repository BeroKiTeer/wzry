#include "Tank.h"
Tank::Tank(const Tank &source):Hero(source){}
Tank::Tank(std::string name,int hp,int power,int defence):Hero(name,hp,power,defence){}