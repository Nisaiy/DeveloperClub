#ifndef FIRE_BALL_H
#define FIRE_BALL_H

#include "Spell.h"

class Fireball : public Spell {
public:
	Fireball(const std::string& name);
	virtual void action(SpellCaster* user, Unit* target);
};

#endif //FIRE_BALL_H
