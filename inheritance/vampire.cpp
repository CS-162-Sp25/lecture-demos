#include <iostream>

#include "vampire.hpp"

/*
void vampire::attack_player(player& p) {
	p.hp -= 10;
	this->hp += 5;
}
*/


vampire::vampire() : monster(50) {}

void vampire::suck_blood(player& p) {
	std::cout << "I vant to suck your blood!" << std::endl;
	std::cout << this->hp << std::endl;
}
