#include "soldier.h"

Soldier::Soldier()
{
	Unit::setDamage(8);
	Unit::setHealth(100);
	Unit::setDescription("_('x')_");
}

Unit* Soldier::clone(/*Unit& aUnit*/)
{
	/*Unit* temp;
	temp = new Soldier();
	Unit::setHealth(aUnit.getHealth());
	return temp;*/
	
	//instead of above do this
	
	return new Soldier(*this);
}

void Soldier::attack(Unit& aUnit)
{
	aUnit.takeDamage(Unit::getDamage());
}

void Soldier::takeDamage(int pDamage)
{
	Unit::setHealth(Unit::getHealth()-pDamage);
}
