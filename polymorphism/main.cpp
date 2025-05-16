#include <iostream>

#include "vampire.hpp"
#include "zombie.hpp"
#include "player.hpp"

void do_turns(
		monster** monsters,
		int n_monsters,
		player& p) {
	for (int i = 0; i < n_monsters; i++) {
		// The computer needs to "bind" this function call to
		// a specific function definition
		//
		// All the compiler can do is bind this function call
		// to the generic monster::attack_player() function.
		// This is called "static binding" or "early binding"

		// By default, all function calls are bound statically.
		// You can, on a function-by-function basis, tell the compiler
		// NOT to bind function calls of that function, and to instead
		// WAIT UNTIL RUNTIME to bind them dynamically. "Dynamic binding",
		// or "late binding".

		// Every pointer / reference variable actually has two types:
		// 1. Static type: The declared type
		// 2. Dynamic type: The original type of the poitner / reference
		// 	before being upcasted (potentially)
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

	std::cout << "Player's remaining HP: " << p.hp << std::endl;

	for (int i = 0; i < 3; i++) {
		do_turns(monsters, n_monsters, p);
	}

	std::cout << "Player's remaining HP: " << p.hp << std::endl;
}
