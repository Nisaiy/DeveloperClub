#include "stdafx.h"
#include "Priest.h"



Priest::Priest(const std::string& name, int hitPoints, int dmg, int mana,  SpellBook* book) : Wizard (name, hitPoints, 
	dmg, mana, book) {
	this->warmage = false;
}

Priest::~Priest() {};

void Priest::cast(Unit* target) {
	if (target->isUndead() == true) {
		this->warmage = true;
	}
	if (spell == NULL) {
		throw noSpellException();
	}
	spendMana(spell->getCost());
	spell->action(this, target);

	this->warmage = false;
}

