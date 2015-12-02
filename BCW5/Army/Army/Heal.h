#ifndef HEAL_H
#define HEAL_H

#include "Spell.h"

class Heal : public Spell {
public:
	Heal(const std::string& name);
	virtual void action(SpellCaster* user, Unit* target);
};

#endif //HEAL_H