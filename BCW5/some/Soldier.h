#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"
#include "Sword.h"

class Soldier : public Unit {
    public:
        Soldier(const std::string& name);
        ~Soldier();

        void attack(Unit* enemy);
};

#endif
