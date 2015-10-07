#include "ogre.h"

Ogre::Ogre()
{
	Unit::setDamage(5);
	Unit::setHealth(120);
	Unit::setDescription("=(OO)=");
}

Unit* Ogre::clone(/*Unit& aUnit*/)
{
	/*Unit* temp;
	temp = new Ogre();
	Unit::setHealth(aUnit.getHealth());
	return temp;*/
	
	//instead of above do this
	
	return new Ogre (*this);
}

void Ogre::attack(Unit& aUnit)
{
	aUnit.takeDamage(Unit::getDamage());
}

void Ogre::takeDamage(int pDamage)
{
	Unit::setHealth(Unit::getHealth()-pDamage);
}
