#include "stdafx.h"
#include "WerwolfAttack.h"


WerwolfAttack::WerwolfAttack(Unit* owner, int damage) : Attack(owner, damage)
{}


WerwolfAttack::~WerwolfAttack(){}

void WerwolfAttack::attackOptin(Unit * target)
{
	target->takeDamage(damage);
	owner->takeDamage(target->getAttack().damage / 2);

	if (target->isInfected() == false && target->isUndead() == false) {
		target->changeState(new WerwolfState(target->getState().name, target->getState().hitPoints, 
			target->getState().hitPointsLimit, target));
	}

}
