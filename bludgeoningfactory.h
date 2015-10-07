#ifndef BLUDGEONINGFACTORY_H
#define BLUDGEONINGFACTORY_H

#include "unitfactory.h"

class BludgeoningFactory: public UnitFactory
{
public:
	Unit* createPlayer(); ////////changed return type to Unit*
	Unit* createMob();    //////
};

#endif
