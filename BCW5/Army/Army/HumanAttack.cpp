#include "HumanAttack.h"
#include "stdafx.h"

HumanAttack::HumanAttack(Unit* owner, int damage) : Attack(owner, damage) {}
HumanAttack::~HumanAttack() {}

void HumanAttack::attackOptin(Unit* target) {
	target->takeDamage(damage);
	owner->takeDamage(target->getAttack().damage / 2);
}

