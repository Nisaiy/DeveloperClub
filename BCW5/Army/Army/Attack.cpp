#include "stdafx.h"
#include "Attack.h"

Attack::Attack(Unit* owner, int damage) {
	this->owner = owner;
	this->damage = damage;
}

Attack::~Attack() {}



void Attack::attackOptin(Unit* target) {
	target->takeDamage(damage);
	owner->takeDamage(target->getAttack().damage / 2);
}


std::ostream& operator<<(std::ostream& out, const Attack& attack) {
	out << ": DMG(" << attack.damage << ')';

	return out;
};