#include "stdafx.h"
#include "Demon.h"

Demon::Demon(Warlock* master, const std::string& name, int hitPoints, int dmg) : Soldier(name, hitPoints, dmg)
{
	this->attack = new HumanAttack(this, dmg);
	this->master = master;
}

void Demon::takeDamage(int dmg) {
	ensureIsAlive();

	if (dmg >= curentForm->hitPoints) {
		curentForm->hitPoints = 0;
		master->freeSlave();
		return;
	}
	curentForm->hitPoints -= dmg;
}

Demon::~Demon() {}