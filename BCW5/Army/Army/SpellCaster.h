#ifndef SPELL_CASTER_H
#define SPELL_CASTER_H

#include "Unit.h"
#include "Attack.h"
#include "Spell.h"
#include "spellBook.h"

class Spell;
class SpellBook;




class SpellCaster : public Unit {
protected:
	int mana;
	int manaLimit;
	Spell* spell;
	SpellBook* book;

	bool warmage{ true };
public:
	SpellCaster(const std::string& name, int hitPoints, int damage, int mana, SpellBook* book);
	virtual ~SpellCaster();

	int getMana() const;
	int getManaLimit() const;
	bool getType()const;

	virtual void spendMana(int cost);
	virtual void addMana(int extra);

	virtual void changeSpell();

	virtual void cast(Unit* target);
	virtual void makeAttack(Unit* enemy) = 0;
};

std::ostream& operator<<(std::ostream& out, const SpellCaster& sc);

#endif //SPELL_CASTER_H
