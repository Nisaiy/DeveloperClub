#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "Unit.h"

class State {
public:
	int hitPoints;
	int hitPointsLimit;
	std::string name;
	Unit* owner;
	bool undead;
	bool infected;

	State(const std::string& nName, int nHitPoints, int nHitPointsLimit, Unit* owner);
	virtual ~State();
	virtual void takeDmg(int dmg);
	virtual void takeMageDmg(int dmg);
	virtual void changeUnd();
};

std::ostream& operator<<(std::ostream& out, const State& state);

#endif  // STATE_H