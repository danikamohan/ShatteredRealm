#include "player.h"
#include <iostream>
using namespace std;

// custructor belongs to Player class
Player::Player(string playerName, string playerWeapon) {
    // save given info
    name = playerName;
    weapon = playerWeapon;
}

