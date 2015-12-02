#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "Wizard.h"

class Necromancer : public Wizard {
public:
	Necromancer(const std::string& name, int hitPoints, int dmg, int mana, SpellBook* book);
	virtual ~Necromancer();
	virtual void cast(Unit* target);
};

std::ostream& operator<<(std::ostream& out, const Necromancer& sc);

#endif // NECROMANCER_H
