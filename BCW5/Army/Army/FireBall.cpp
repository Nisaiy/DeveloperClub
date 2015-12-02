#include "stdafx.h"
#include "FireBall.h"


Fireball::Fireball(const std::string& name) : Spell(name) {
	this->cost = 15;
	this->actionPoints = 30;
}

void Fireball::action(SpellCaster* user, Unit* target) {
	if (user->getType() == true) {
		target->takeMagicDamage(actionPoints);
	}
	else {
		target->takeMagicDamage(actionPoints / 2);
	}
}

