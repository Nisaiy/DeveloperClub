#include "stdafx.h"
#include "Berserker.h"

Berserker::Berserker(const std::string& name, int hitPoints, int dmg)
	: Soldier(name, hitPoints, dmg) {}

Berserker::~Berserker() {}

void Berserker::takeMagicDamage(int damage) {}


