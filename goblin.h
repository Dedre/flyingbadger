#ifndef GOBLIN_H
#define GOBLIN_H

#include "monster.h"

class Goblin: public Monster
{
public:
	Goblin();
	virtual Unit* clone(/*Unit&*/); /////changed three methods to virtual
	virtual void attack(Unit&);	   /////
	virtual void takeDamage(int); ////	
	

	
};

#endif
