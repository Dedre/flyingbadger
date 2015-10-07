#ifndef ELEMENTAL_H
#define ELEMENTAL_H

#include "monster.h"

class Elemental: public Monster
{
public:
	Elemental();
	virtual Unit* clone(/*Unit&*/);   ///// changed three methods to virtual
	virtual void attack(Unit&);  ///////
	virtual void takeDamage(int); //	
};

#endif
