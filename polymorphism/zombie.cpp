#include "zombie.hpp"

void zombie::attack_player(player& p) {
	if (this->sanity > 0) {
		this->sanity -= 5;
	} else {
		p.hp -= 8;
	}
}

zombie::zombie() : monster(20) {}
