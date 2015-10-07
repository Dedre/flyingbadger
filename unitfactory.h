#ifndef UNITFACTORY_H
#define UNITFACTORY_H

#include "unit.h"

class UnitFactory
{
public:
	virtual Unit* createPlayer()=0;
	virtual Unit* createMob()=0;
};

#endif
