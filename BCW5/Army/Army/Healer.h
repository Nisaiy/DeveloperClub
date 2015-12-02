#ifndef HEALER_H
#define HEALER_H

#include "Wizard.h"

class Healer : public Wizard {
public:
	Healer(const std::string& name, int hitPoints, int dmg, int mana, SpellBook* book);
	virtual ~Healer();
};

#endif // HEALER_H
