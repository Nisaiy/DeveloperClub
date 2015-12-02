#include "Vampire.h"

Vampire::Vampire(const std::string& name) : Unit(name) {
    this->weapon = new Fangs(this);
    state->isUndead = true;
}

Vampire::~Vampire() {}

void Vampire::attack(Unit* enemy) {
    isAlive();
    weapon->action(enemy);
}
