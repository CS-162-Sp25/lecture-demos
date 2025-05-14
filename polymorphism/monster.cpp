#include <iostream>
#include "monster.hpp"

monster::monster(int hp) : hp(hp) {}

void monster::attack_player(player& p) {
	std::cout << "monster::attack_player()" << std::endl;
}
