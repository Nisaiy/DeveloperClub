#include "Sword.h"

Sword::Sword(Unit* owner) : Weapon(owner, "Sword", 30) {}

Sword::~Sword() {}

void Sword::action(Unit* target) {
    target->takeDamage(damage);
    owner->takeDamage(target->getWeapon().damage / 2);
}

