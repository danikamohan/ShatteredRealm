#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player {
public:
    string name;
    string weapon;
    
    Player(string playerName, string playerWeapon);
};
#endif
