#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Referee.h"
#include "Human.h"

int main()
{
    Human *a = new Human;
    Computer *d = new Computer;
    Referee c;
    Player *m = c.refGame(a, d);
    if (m)
    {
        std::cout << d->name << "wins." << std::endl;
    }
    else
    {
        std::cout << "It's a Tie." << std::endl;
    }
}