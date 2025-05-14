#include <iostream>

#include "vampire.hpp"
#include "zombie.hpp"
#include "player.hpp"

void do_turns(
		monster** monsters,
		int n_monsters,
		player& p) {
	for (int i = 0; i < n_monsters; i++) {
		monsters[i]->attack_player(p);
	}
}

int main() {
	player p;

	int n_vampires = 10;
	int n_zombies = 15;
	int n_monsters = n_vampires + n_zombies;

	// Arrays are homogeneous: all elements must be of the same type
	// As it turns out, a variable can actually have to different kinds
	// of types: a static type, a dynamic type.
	monster** monsters = new monster*[n_monsters];

	// 1. The first problem: Object slicing
	
	for (int i = 0; i < n_vampires; i++) {
		vampire* v = new vampire;
		monsters[i] = v;
	}
	for (int i = 0; i < n_zombies; i++) {
		zombie* z = new zombie;
		monsters[i + n_vampires] = z;
	}

	// The 11th monster in the array was constructed from a zombie object
	// z, but it does NOT have a sanity member variable. That was sliced
	// away.
	monsters[10].attack_player(p);

	std::cout << "Player's remaining HP: " << p.hp << std::endl;

	for (int i = 0; i < 3; i++) {
		do_turns(monsters, n_monsters, p);
	}

	std::cout << "Player's remaining HP: " << p.hp << std::endl;
}
