#ifndef STATE_H
#define STATE_H

#include <iostream>

class State {
    public:
        int hp;
        int hpMax;
        std::string name;
        int mp;
        int mpMax;

        bool isUndead;
        bool isWerewolf;

        State(const std::string name="Unit", int hp=100, int mp=100);
        ~State();
};

std::ostream& operator<<(std::ostream& out, const State& state);

#endif
