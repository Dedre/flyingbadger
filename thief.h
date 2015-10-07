#ifndef THIEF_H
#define THIEF_H

#include "player.h"

class Thief: public Player
{
public:
	Thief();
	virtual Unit* clone(/*Unit&*/);////////changed three methods to virtual
	virtual void attack(Unit&);////////
	virtual void takeDamage(int);//	
};

#endif
