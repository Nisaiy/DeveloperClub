#include "Werewolf.h"

Werewolf::Werewolf(const std::string& name) : Unit(name) {
    this->weapon = new Sword(this);
    this->state->isWerewolf = true;

    altState = new State("Werewolf", 180);
    altWeapon = new Claws(this);
}

Werewolf::~Werewolf() {}

void Werewolf::attack(Unit* enemy) {
    isAlive();
    weapon->action(enemy);
}

void Werewolf::changeState() {
    State* tempState = state;
    Weapon* tempWeapon = weapon;

    altState->hp = (state->hp * altState->hpMax) / state->hpMax;

    this->state = altState;
    this->weapon = altWeapon;

    altState = tempState;
    altWeapon = tempWeapon;
}
