#ifndef BERSERK_H
#define BERSERK_H

#include "Unit.h"
#include "Sword.h"

class Berserk : public Unit {
    public:
        Berserk(const std::string& name);
        ~Berserk();

        void attack(Unit* enemy);
        void takeMagicDamage(int magicDmg);
};

#endif
