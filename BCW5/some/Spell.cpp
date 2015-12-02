#include "Spell.h"

Spell::Spell(const std::string& name, int spellpower) {
    this->name = name;
    this->spellpower = spellpower;
}

Spell::~Spell() {}

std::ostream& operator<<(std::ostream& out, const Spell& spell) {
    out << spell.name << ": POWER(" << spell.spellpower << ')';

    return out;
}
