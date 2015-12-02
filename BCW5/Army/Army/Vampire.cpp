#include "stdafx.h"
#include "Vampire.h"





Vampire::Vampire(const std::string & name, int hitPoints, int dmg) : Soldier (name, hitPoints, dmg)
{
	attack = new VampireAttack(this, dmg);
	curentForm->undead = true;
}

Vampire::~Vampire(){}
