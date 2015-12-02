#include "stdafx.h"
#include "Soldier.h"

Soldier::Soldier(const std::string& name, int hitPoints, int dmg) : Unit(name, hitPoints, dmg) {
	this->attack = new HumanAttack(this, dmg);
}

Soldier::~Soldier() {
}

void Soldier::makeAttack(Unit* enemy) {
	ensureIsAlive();
	attack->attackOptin(enemy);
}

