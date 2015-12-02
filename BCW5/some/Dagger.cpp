#include "Dagger.h"

Dagger::Dagger(Unit* owner) : Weapon(owner, "Dagger", 30) {}

Dagger::~Dagger() {}

void Dagger::action(Unit* target) {
    target->takeDamage(damage);
}
