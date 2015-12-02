#ifndef WIZARD_H
#define WIZARD_H

#include "SpellCaster.h"
#include "FireBall.h"

class Wizard : public SpellCaster {
public:
	Wizard(const std::string& name, int hitPoints, int damage, int mana, SpellBook* book);
	virtual ~Wizard();

	virtual void makeAttack(Unit* enemy);
};

#endif // WIZARD_H
