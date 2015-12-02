#ifndef SPELL_H
#define SPELL_H

#include "Unit.h"

class Spell {
    public:
        std::string name;
        int spellpower;

        Spell(const std::string& name, int spellpower);
        virtual ~Spell();

        virtual void action(Unit* target) = 0;
};

std::ostream& operator<<(std::ostream& out, const Spell& spell);

#endif
