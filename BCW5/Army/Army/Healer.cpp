#include "stdafx.h"
#include "Healer.h"

Healer::Healer(const std::string& name, int hitPoints, int dmg, int mana, SpellBook* book) : Wizard(name, hitPoints, dmg, mana, book) {
	this->warmage = false;
}

Healer::~Healer() {}
