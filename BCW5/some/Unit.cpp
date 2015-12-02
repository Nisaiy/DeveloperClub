#include "Unit.h"

Unit::Unit(const std::string& name, int hp, int mp) {
    this->state = new State(name, hp, mp);
}

Unit::~Unit() {
    delete state;
    delete weapon;
}

const State& Unit::getState() const {
    return *state;
}

const Weapon& Unit::getWeapon() const {
    return *weapon;
}

void Unit::setName(const std::string& newName) {
    state->name += newName;
}

void Unit::takeDamage(int dmg) {
    isAlive();
    this->state->hp -= dmg;
    if( state->hp < 0 ) {
        state->hp = 0;
    }
}

void Unit::takeMagicDamage(int magicDmg) {
    takeDamage(magicDmg);
}

void Unit::isAlive() {
    if( this->state->hp == 0 ) {
        throw new UnitIsDeadException();
    }
}

void Unit::addHp(int amount) {
    isAlive();
    this->state->hp += amount;
    if( state->hp > state->hpMax ) {
        state->hp = state->hpMax;
    }
}

void Unit::changeWeapon(Weapon* newWeapon) {
    delete weapon;
    this->weapon = newWeapon;
}

void Unit::turnToVampire() {
    state->isUndead = true;
    setName(" (Vampire)");
}

void Unit::setState(State* newState) {
    delete this->state;
    this->state = newState;
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getState() << " has weapon: ";
    out << unit.getWeapon();

    return out;
}
