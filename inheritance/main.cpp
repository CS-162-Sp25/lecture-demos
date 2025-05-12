#include <iostream>

#include "vampire.hpp"
#include "zombie.hpp"
#include "player.hpp"

/*
 * If you have an object with another inner object, and you constructor the
 * outer object, that will ALSO construct the inner object.
 *
 * Inner object gets constructed first. Then outer object.
 *
 * If you have a class that inherits from another class, and you construct
 * an object of the derived class, that will ALSO construct an object of the
 * base class.
 *
 * Base class constructor gets executed first.
 */

int main() {
	player p;

	vampire v;
	zombie z;

	std::cout << "Player's remaining HP: " << p.hp << std::endl;

	// When the compiler sees this line, it knows that v has TWO
	// attack_player functions. It must decide which one to call.
	// By default, this calls vampire::attack_player()
	v.attack_player(p);
	v.monster::attack_player(p);

	// v.suck_blood(p);
	
	// By default, this calls zombie::attack_player()
	z.attack_player(p);
	z.attack_player(p);
	z.attack_player(p);

	std::cout << "Player's remaining HP: " << p.hp << std::endl;

	// What is type casting?
	// Change the type of data
	// To construct a copy of data, where the copy is of a different type
	// 	(but sort of the same value)
	
	int x = 3;
	double pi = x;
	// pi is now 3.0
	
	// Upcasting: Type casting from a derived-class type to a base-class
	// 	type. Upcasting is fine. Can even be done implicitly.
	monster m = z;
}
