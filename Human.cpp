#include "Human.h"
#include <iostream>
Human::Human()
{
    std::cout << "Enter move:";
    std::cin >> move;
    std::cout << std::endl;
    name = "Human";
}
Human::Human(std::string a)
{
    std::cout << "Enter move:";
    std::cin >> move;
    std::cout << std::endl;
    name = a;
}

char Human::makeMove()
{

    return move;
};
