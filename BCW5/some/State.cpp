#include "State.h"

State::State(const std::string name, int hp, int mp) {
    this->name = name;
    this->hp = hp;
    this->hpMax = hp;
    isUndead = false;
    isWerewolf = false;
}

State::~State() {}

std::ostream& operator<<(std::ostream& out, const State& state) {
    out << state.name  << ": HP(" << state.hp << '/'<< state.hpMax << ')';

    return out;
}
