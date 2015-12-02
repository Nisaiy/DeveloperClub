#ifndef ATTACK_H
#define ATTACK_H

#include "Unit.h"

class Unit;

class Attack {
public:
	Unit* owner;
	int damage;
	Attack(Unit* owner, int damage = 30);
	virtual ~Attack();

	virtual void attackOptin(Unit* target) = 0;

};
std::ostream& operator<<(std::ostream& out, const Attack& attack);


#endif // ATTACK_H