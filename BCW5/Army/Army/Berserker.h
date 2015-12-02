#ifndef BERSERKER_H
#define BERSERKER_H

#include "Soldier.h"

class Berserker : public Soldier {
public:
	Berserker(const std::string& name, int hitPoints, int dmg);
	virtual ~Berserker();
	virtual void takeMagicDamage(int damage);
};

#endif //BERSERKER_H
