#include "Wizard.h"
#include "stdafx.h"

Wizard::Wizard(const std::string& name, int hitPoints, int damage, int mana, SpellBook* book) : 
	SpellCaster(name, hitPoints, damage, mana, book) {
	this->attack = new HumanAttack(this, damage);
}

Wizard::~Wizard() {}

void Wizard::makeAttack(Unit* enemy) {
	ensureIsAlive();
	attack->attackOptin(enemy);
}
