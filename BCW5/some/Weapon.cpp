#include "Weapon.h"

Weapon::Weapon(Unit* owner, const std::string& name, int damage) {
    this->owner = owner;
    this->name = name;
    this->damage = damage;
}

Weapon::~Weapon() {}

std::ostream& operator<<(std::ostream& out, const Weapon& weapon) {
    out << weapon.name << ": DMG(" << weapon.damage << ')';

    return out;
}
