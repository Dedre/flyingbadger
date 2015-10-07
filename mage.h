#ifndef MAGE_H
#define MAGE_H

#include "player.h"

class Mage: public Player
{
public:
	Mage();
	virtual Unit* clone(/*Unit&*/);    //////changed all three methods to virtualS
	virtual void attack(Unit&);    ///// 
	virtual void takeDamage(int);//	
};

#endif
