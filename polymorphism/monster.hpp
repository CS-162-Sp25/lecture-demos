#ifndef MONSTER_HPP
#define MONSTER_HPP

#include "player.hpp"

// Any class that has AT LEAST ONE pure vitual function is said to be
// an "abstract class". Abstract classes cannot be initialized or declared.
class monster {
// private: Only accessible by member functions of THIS class
// public: Accessible everywhere
// protected: Only accessible by member functions of THIS class AND member
// 	functions of classes that are derived from THIS class
protected:
	int hp;
public:
	monster() = default;
	monster(int hp);
	virtual void attack_player(player& p) = 0; // This marks the function as "pure virtual"
};

#endif
