#include "Rogue.h"

Rogue::Rogue(const std::string& name) : Unit(name) {
    this->weapon = new Dagger(this);
}

Rogue::~Rogue() {}

void Rogue::attack(Unit* enemy) {
    isAlive();
    weapon->action(enemy);
}
