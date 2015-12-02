#include "Spellcaster.h"

Spellcaster::Spellcaster(const std::string& name) : Unit(name, 50, 100) {
    this->weapon = new Staff(this);
    addSpell(new Fireball("FIREBALL", 40));

}

Spellcaster::~Spellcaster() {}

const std::map<std::string,Spell*>& Spellcaster::getSpellbook() const {
    return spellbook;
}

void Spellcaster::attack(Unit* enemy) {
    isAlive();
    weapon->action(enemy);
}

void Spellcaster::cast(const std::string& spellName, Unit* target) {
    spellbook[spellName]->action(target);
}

void Spellcaster::addSpell(Spell* newSpell) {
    this->spellbook.insert(std::pair<std::string,Spell*>(newSpell->name,newSpell));
}

std::ostream& operator<<(std::ostream& out, const Spellcaster& spellcaster) {
    out << (const Unit&)spellcaster;
    out << " MP(" << spellcaster.getState().mp << '/' << spellcaster.getState().mpMax << ')';
    // out << "**Spellbook: \n";

    // for (std::map<std::string, Spell*>::iterator it = spellcaster.getSpellbook().begin(); it != spellcaster.getSpellbook().end(); it++ ) {
    //     out << "Has spell => " << it->first << std::endl;
    // }

    return out;
}
