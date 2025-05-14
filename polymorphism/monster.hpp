#ifndef MONSTER_HPP
#define MONSTER_HPP

#include "player.hpp"

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
	void attack_player(player& p);
};

#endif
