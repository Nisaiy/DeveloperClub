#ifndef ROGUE_ATTACK_H
#define ROGUE_ATTACK_H

#include "Attack.h"

class RogueAttack : public Attack {
public:
	RogueAttack(Unit* owner, int damage = 100);
	~RogueAttack();

	virtual void attackOptin(Unit* target);

};

#endif // ROGUE_ATTACK_H

