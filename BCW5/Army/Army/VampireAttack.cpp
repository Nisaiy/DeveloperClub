#include "stdafx.h"
#include "VampireAttack.h"

VampireAttack::VampireAttack(Unit* owner, int damage = 40): HumanAttack(owner, damage) {}
VampireAttack::~VampireAttack(){}


void VampireAttack::attackOptin(Unit* target) {
	target->takeDamage(damage);
	owner->takeDamage(target->getAttack().damage / 2);
	this->owner->addHitPoints(damage / 3);

	if (target->isUndead() == false && target->isInfected() == false) {
		target->changeUndead();
		target->changeAttack(new VampireAttack(target, this->damage));
	}
}

