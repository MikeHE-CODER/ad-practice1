#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player
{

public:
    Player();
    virtual char makeMove() = 0;
    std::string getName();
    std::string name;
    char move;
};
#endif