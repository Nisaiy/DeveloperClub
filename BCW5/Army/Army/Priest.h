#ifndef PRIEST_H
#define PRIEST_H

#include "SpellCaster.h"

class Priest : public Wizard {
public:
	Priest(const std::string& name, int hitPoints, int dmg, int mana, SpellBook* book);
	virtual ~Priest();
	virtual void cast(Unit* target);
};

#endif // PRIEST_H
