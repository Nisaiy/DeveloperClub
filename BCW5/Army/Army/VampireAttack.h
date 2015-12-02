#ifndef VAMPIRE_ATTACK_H
#define VAMPIRE_ATTACK_H

#include "HumanAttack.h"

class VampireAttack : public HumanAttack {
public:
	VampireAttack(Unit* owner, int damage);
	~VampireAttack();

	virtual void attackOptin(Unit* target);

};

#endif // VAMPIRE_ATACK_H