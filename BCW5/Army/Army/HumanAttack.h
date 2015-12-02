#ifndef HUMAN_ATTACK_H
#define HUMAN_ATTACK_H

#include "Attack.h"

class HumanAttack : public Attack {
public:
	HumanAttack(Unit* owner, int damage = 40);
	~HumanAttack();

	virtual void attackOptin(Unit* target);

};

#endif // HUMAN_ATTACK_H