#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "monster.hpp"
#include "player.hpp"

// The vampire class "inherits from", or is "derived from", the monster class
class vampire : public monster {
public:
	vampire();
	void suck_blood(player &p);
};

#endif
