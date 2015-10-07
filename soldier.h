#ifndef SOLDIER_H
#define SOLDIER_H

#include "player.h"

class Soldier: public Player
{
public:
	Soldier();
	virtual Unit* clone(/*Unit&*/);///////////changed three methods to virtual
	virtual void attack(Unit&);//////////
	virtual void takeDamage(int);//	
	
};

#endif
