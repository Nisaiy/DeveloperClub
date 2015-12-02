#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
#include "Claws.h"
#include "Sword.h"

class Werewolf : public Unit {
    public:
        State* altState;
        Weapon* altWeapon;

        Werewolf(const std::string& name);
        ~Werewolf();

        void attack(Unit* enemy);
        void changeState();
};

#endif
