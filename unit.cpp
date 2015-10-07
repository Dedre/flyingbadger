#include "unit.h"
#include<iostream>
#include<string>
using namespace std;

Unit::Unit()
{
}

Unit::~Unit()
{
}

void Unit::setHealth(int pHealth)
{
	health = pHealth;
}

void Unit::setDamage(int pDamage)
{
	damage = pDamage;
}

int Unit::getHealth()
{
	return health;
}

int Unit::getDamage()
{
	return damage;
}

void Unit::setDescription(string d)
{
	description = d;
}

string Unit :: getDescription()
{
	return description;
}
