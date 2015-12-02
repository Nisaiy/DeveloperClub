#include "Fangs.h"

Fangs::Fangs(Unit* owner) : Weapon(owner, "Fangs", 30) {
    this->chanceToInfect = 1;
}

Fangs::~Fangs() {}

void Fangs::action(Unit* target) {
    target->takeDamage(damage);
    owner->takeDamage(target->getWeapon().damage / 2);
    this->owner->addHp(damage / 3);

    if( chanceToInfect % 2 == 0 && !target->getState().isUndead && !target->getState().isWerewolf ) {
        target->turnToVampire();
        target->changeWeapon(new Fangs(target));
    }

    chanceToInfect += 1;
}
