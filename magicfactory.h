#ifndef MAGICFACTORY_H
#define MAGICFACTORY_H

#include "unitfactory.h"

class MagicFactory: public UnitFactory
{
public:
	Unit* createPlayer();
	Unit* createMob();
	
};

#endif
