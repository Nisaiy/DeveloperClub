#ifndef WIZARD_H
#define WIZARD_H

#include "Spellcaster.h"

class Wizard : public Spellcaster {
    public:
        Wizard(const std::string& name);
        ~Wizard();
};

#endif
