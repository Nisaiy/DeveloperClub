#include "stdafx.h"
#include "Heal.h"


Heal::Heal(const std::string& name) : Spell(name) {}


void Heal::action(SpellCaster* user, Unit* target) {
	if (target->isUndead() == true) {
	}
	else {
		if (user->getType() == false) {
			target->addHitPoints(actionPoints);
		}
		else {
			target->addHitPoints(actionPoints / 2);
		}
	}
}
