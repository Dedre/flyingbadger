#include "thief.h"

Thief::Thief()
{
	Unit::setDamage(10);
	Unit::setHealth(60);
	Unit::setDescription("_('o')_");
}

Unit* Thief::clone(/*Unit& aUnit*/)
{
	/*Unit* temp;
	temp = new Thief();
	Unit::setHealth(aUnit.getHealth());
	return temp;*/
	
	//instead of above do this
	
	return new Thief(*this);
}

void Thief::attack(Unit& aUnit)
{
	aUnit.takeDamage(Unit::getDamage());
}

void Thief::takeDamage(int pDamage)
{
	Unit::setHealth(Unit::getHealth()-pDamage);
}
