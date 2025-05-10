#include <iostream>

#include "vampire.hpp"
#include "zombie.hpp"
#include "player.hpp"

int main() {
	player p;

	vampire v;
	zombie z;

	std::cout << "Player's remaining HP: " << p.hp << std::endl;

	v.attack_player(p);
	v.suck_blood(p);
	z.attack_player(p);
	z.attack_player(p);
	z.attack_player(p);

	std::cout << "Player's remaining HP: " << p.hp << std::endl;
}
