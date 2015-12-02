#include "Soldier.h"

Soldier::Soldier(const std::string& name) : Unit(name) {
    this->weapon = new Sword(this);
}

Soldier::~Soldier() {}

void Soldier::attack(Unit* enemy) {
    isAlive();
    weapon->action(enemy);
}

