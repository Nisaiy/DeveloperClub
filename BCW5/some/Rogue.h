#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"
#include "Dagger.h"

class Rogue : public Unit {
    public:
        Rogue(const std::string& name);
        ~Rogue();

        void attack(Unit* enemy);
};

#endif
