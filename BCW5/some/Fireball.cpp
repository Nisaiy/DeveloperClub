#include "Fireball.h"

Fireball::Fireball(const std::string& name, int spellpower) : Spell(name, spellpower) {}

Fireball::~Fireball() {}

void Fireball::action(Unit* target) {
    target->takeMagicDamage(spellpower);
}

