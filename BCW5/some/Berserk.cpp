#include "Berserk.h"

Berserk::Berserk(const std::string& name) : Unit(name) {
    this->weapon = new Sword(this);
}

Berserk::~Berserk() {}

void Berserk::attack(Unit* enemy) {
    isAlive();
    weapon->action(enemy);
}

void Berserk::takeMagicDamage(int magicDmg) {}
