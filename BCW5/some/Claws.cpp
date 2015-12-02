#include "Claws.h"

Claws::Claws(Unit* owner) : Weapon(owner, "Claws", 30) {
    this->chanceToInfect = 1;
}

Claws::~Claws() {}

void Claws::action(Unit* target) {
    target->takeDamage(damage);
    owner->takeDamage(target->getWeapon().damage / 2);

    if( chanceToInfect % 2 == 0 && !target->getState().isUndead ) {
        target->setState(new State("Werewolf", target->getState().hp*2, target->getState().mp*2));
        target->changeWeapon(new Claws(target));
    }

    chanceToInfect += 1;
}
