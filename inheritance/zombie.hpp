#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "monster.hpp"

// The zombie class "inherits from", or is "derived from", the monster class
class zombie : public monster {
private:
	// This is called "extension".
	int sanity = 10;
public:
	zombie();
	void attack_player(player& p);
};

#endif
