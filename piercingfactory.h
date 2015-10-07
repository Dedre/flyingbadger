#ifndef PIERCINGFACTORY_H
#define PIERCINGFACTORY_H

#include "unitfactory.h"

class PiercingFactory: public UnitFactory
{
public:
	Unit * createPlayer();
	Unit * createMob();
};

#endif
