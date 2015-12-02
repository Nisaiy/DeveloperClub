#ifndef FIREBALL_H
#define FIREBALL_H

#include "Spell.h"

class Fireball : public Spell {
    public:
        Fireball(const std::string& name, int spellpower);
        ~Fireball();

        virtual void action(Unit* target);
};

#endif
