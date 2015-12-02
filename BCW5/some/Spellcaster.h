#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "Unit.h"
#include "Staff.h"
#include "Fireball.h"
#include <map>

class Spellcaster : public Unit {
    protected:
        std::map<std::string,Spell*> spellbook;

    public:
        Spellcaster(const std::string& name);
        ~Spellcaster();

        const std::map<std::string,Spell*>& getSpellbook() const;

        void attack(Unit* enemy);
        void cast(const std::string& spellName, Unit* target);
        void addSpell(Spell* newSpell);

};

std::ostream& operator<<(std::ostream& out, const Spellcaster& spellcaster);

#endif
