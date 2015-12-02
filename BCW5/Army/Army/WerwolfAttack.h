#pragma once
#include "Attack.h"
class WerwolfAttack : public Attack {
public:
	WerwolfAttack(Unit* owner, int damage = 30);
	virtual ~WerwolfAttack();

	virtual void attackOptin(Unit* target);
};

