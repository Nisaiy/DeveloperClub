#ifndef UNIT_H
#define UNIT_H

#include "State.h"
#include "Weapon.h"
#include "Exceptions.h"

class Weapon;

class Unit {
    protected:
        State* state;
        Weapon* weapon;

        void isAlive();

    public:
        Unit(const std::string& name="Unit", int hp=100, int mp=100);
        virtual ~Unit();

        const State& getState() const;
        const Weapon& getWeapon() const;

        void setName(const std::string& newName);
        void setState(State* newState);

        virtual void attack(Unit* enemy) = 0;
        void takeDamage(int dmg);
        virtual void takeMagicDamage(int magicDmg);

        void addHp(int amount);
        void changeWeapon(Weapon* newWeapon);
        void turnToVampire();
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif
