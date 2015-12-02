#include "stdafx.h"
#include "RogueAttack.h"

RogueAttack::RogueAttack(Unit* owner, int damage) : Attack(owner, damage){}
RogueAttack::~RogueAttack() {}

void RogueAttack::attackOptin(Unit* target) {
	target->takeDamage(damage);
}

