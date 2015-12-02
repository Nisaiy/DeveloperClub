#ifndef DEMON_H
#define DEMON_H

#include "Soldier.h"
#include "Warlock.h"

class Warlock;

class Demon : public Soldier {
private:
	Warlock* master;

public:
	Demon(Warlock* master, const std::string& name, int hitPoints, int dmg);
	~Demon();

	void takeDamage(int dmg);
};

#endif //DEMON_H
