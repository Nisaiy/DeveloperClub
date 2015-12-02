#include "stdafx.h"
#include "Warlock.h"

Warlock::Warlock(const std::string& name, int hitPoints, int dmg, int mana, SpellBook* book) : Wizard(name, hitPoints, 
	dmg, mana, book)
{
	this->slave = NULL;
}

Warlock::~Warlock() {
	if (slave != NULL) {
		delete slave;
	}
}

void Warlock::summon() {
	if (slave != NULL) {
		return;
	}
	spendMana(manaLimit / 4);
	slave = new Demon(this, "Demon", 200, 30);
}

void Warlock::freeSlave() {
	if (slave != NULL) {
		delete slave;
	}
}

Demon* Warlock::demon() {
	return slave;
}
