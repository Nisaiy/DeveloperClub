#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"
#include "HumanAttack.h"

class HumanAttack;


class Soldier : public Unit {
public:
	Soldier(const std::string& name, int hitPoints, int dmg);
	virtual ~Soldier();
	virtual void makeAttack(Unit* enemy);
};

#endif //SOLDIER_H
