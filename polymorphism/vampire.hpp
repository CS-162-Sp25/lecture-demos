#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "monster.hpp"
#include "player.hpp"

// The vampire class "inherits from", or is "derived from", the monster class
class vampire : public monster {
public:
	vampire();
	void suck_blood(player &p);

	// Overriding. Must match the header from the base class.
	void attack_player(player& p);
	virtual monster* clone() const = 0;
};

#endif
