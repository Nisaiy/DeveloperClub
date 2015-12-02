#ifndef WARLOCK_H
#define WARLOCK_H

#include "Wizard.h"
#include "Demon.h"

class Demon;

class Warlock : public Wizard {
private:
	Demon* slave;
public:
	Warlock(const std::string& name, int hitPoints, int dmg, int mana, SpellBook* book);
	~Warlock();

	void summon();
	Demon* demon();
	void freeSlave();
};

#endif // WARLOCK_H
