/**
 * @file   unit.h
 * @Author Craig van Heerden U15029779, Dedre Olwage U15015239
 * @date   September, 2015- October, 2015
 * @brief  Pure virtual class that defines a unit
 *
 */
#ifndef UNIT_H
#define UNIT_H

#include <iostream>

using namespace std;

class Unit
{
public:
	Unit();
	virtual ~Unit();
	int getHealth();
	int getDamage();
	virtual void attack(Unit&)=0;
	virtual void takeDamage(int)=0;
	virtual Unit* clone(/*Unit&*/)=0;
	string getDescription();

protected:
	void setHealth(int pHealth);
	void setDamage(int pDamage);
	void setDescription(string pDescription);
	//string getDescription();

private:
	int damage;
	int health;
	string description;
	
};

#endif
