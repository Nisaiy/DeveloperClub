#include "stdafx.h"
#include "Necromanser.h"

Necromancer::Necromancer(const std::string & name, int hitPoints, int dmg, int mana, SpellBook * book) 
	: Wizard (name, hitPoints, dmg, mana, book)
{
	curentForm->undead = true;
}

Necromancer::~Necromancer()
{
}

void Necromancer::cast(Unit * target)
{
	Wizard::cast(target);
	addObservable(target);
	target->addObserver(this);
}

std::ostream& operator<<(std::ostream& out, const Necromancer& sc) {
	out << *((Unit*)(&sc)) << " mana(";
	out << sc.getMana() << "/" << sc.getManaLimit() << ")";
	std::set<Unit*> observables = sc.getObservables();

	if (observables.size() == 0) {
		return out;
	}

	std::set<Unit*>::iterator it = observables.begin();
	out << " Observables: [ ";
	for (; it != observables.end(); it++) {
		out << (*it)->getState() << " ";
	}
	out << "]";

	return out;
}