#ifndef OGRE_H
#define OGRE_H

#include "monster.h"

class Ogre: public Monster
{
public:
	Ogre();
	virtual Unit* clone(/*Unit&*/); ////////changed three methods to virtual
	virtual void attack(Unit&);//////////
	virtual void takeDamage(int);//	
	
};

#endif
