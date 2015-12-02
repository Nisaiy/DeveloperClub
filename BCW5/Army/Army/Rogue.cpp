#include "stdafx.h"
#include "Rogue.h"


Rogue::Rogue(const std::string& name, int hitPoints, int dmg)
	: Soldier(name, hitPoints, dmg) {
	this->attack = new RogueAttack(this, dmg);
}

Rogue::~Rogue() {}