#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"
#include "Fangs.h"

class Vampire : public Unit {
    public:
        Vampire(const std::string& name);
        ~Vampire();

        void attack(Unit* enemy);
};

#endif
