#include "Staff.h"

Staff::Staff(Unit* owner) : Weapon(owner, "Staff", 10) {}

Staff::~Staff() {}

void Staff::action(Unit* target) {
    target->takeDamage(damage);
    owner->takeDamage(target->getWeapon().damage / 2);
}
