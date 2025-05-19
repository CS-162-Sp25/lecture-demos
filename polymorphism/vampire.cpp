#include <iostream>

#include "vampire.hpp"


void vampire::attack_player(player& p) {
	p.hp -= 10;
	this->hp += 5;
}



// Each member initialization statement can take on one of three forms:
// 1. name_of_member_variable(value_of_member_variable)
// 2. name_of_member_variable(constructor_arg_1, constructor_arg_2, ...)
// 3. name_of_base_class(constructor_arg_1, constructor_arg_2, ...)
vampire::vampire() : monster(50) {}

void vampire::suck_blood(player& p) {
	std::cout << "I vant to suck your blood!" << std::endl;
	std::cout << this->hp << std::endl;
}

monster* vampire::clone() const {
	return new vampire(*this);
}
