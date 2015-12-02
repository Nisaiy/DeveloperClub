#ifndef SPELLBOOK_H
#define SPELLBOOK_H

#include "stdafx.h"
#include "Fireball.h"
#include "Heal.h"


class Spell;


class SpellBook {
protected:
	std::vector <Spell*> *book;
public:
	SpellBook();
	~SpellBook();
	const std::vector<Spell*>& getSpells() const;

	void insertSpell(Spell* spell);
	int bookSize();

	Spell* getSpell(int place);
};
std::ostream& operator<<(std::ostream& out, const SpellBook& book);


#endif // SPELLBOOK_H