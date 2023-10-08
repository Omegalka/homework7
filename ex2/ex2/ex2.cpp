#include <iostream>
#include <windows.h>
using namespace std;

#include "mobile_phone.h"
#include "human.h"
#include "weights.h"
#include "door.h"
#include "room.h"

int main()
{
    Human a;
    Human b(192, 2);
    Human c(192, 2, "Jonathan");
    Human d(192, 2, "Jonathan", true);

    MobilePhone e;
    MobilePhone f("Iphon", 100, 2, true, "loud");

    Door g;
    Door h(string color, int width, int size, bool open, string handle_color);

    Weights i;
    Weights gweights(string color, int size, int width, string weight_plat, int screen);

    Room k;
    Room l(string name, int height, int width, string walls_color, int walls);
    //Не знаю правильно ли так вызывать конструкторы?
}




