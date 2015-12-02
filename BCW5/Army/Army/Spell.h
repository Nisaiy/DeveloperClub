#ifndef SPELL_H
#define SPELL_H

#include "SpellCaster.h"

class SpellCaster;


class Spell {
protected:
	int cost;
	int actionPoints;
	std::string name;

	bool warspell;

public:
	Spell(const std::string& name);
	virtual ~Spell();

	int getCost() const;
	int getActionPoints() const;

	const std::string& getName() const;

	virtual void action(SpellCaster* user, Unit* target) = 0;
};

std::ostream& operator<<(std::ostream& out, const Spell& spell);


#endif //SPELL_H
