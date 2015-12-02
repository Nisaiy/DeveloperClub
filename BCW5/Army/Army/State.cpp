#include "stdafx.h"
#include "State.h"

State::State(const std::string& nName, int nHitPoints, int nHitPointsLimit, Unit* owner) {
	this->name = nName;
	this->hitPoints = nHitPoints;
	this->hitPointsLimit = nHitPointsLimit;
	this->owner = owner;

	bool undead = false;
	bool infected = false;
}

State::~State() {}

void State::takeDmg(int dmg)
{
	if (dmg >= this->hitPoints) {
		this->hitPoints = 0;
		owner->notifyObservers();
		owner->notifyObservables();
		return;
	}
	this->hitPoints -= dmg;
}

void State::takeMageDmg(int dmg)
{
	takeDmg(dmg);
}

void State::changeUnd()
{
	this->undead = !undead;
}


std::ostream& operator<<(std::ostream& out, const State& state) {
	out << state.name.c_str() << ": HP(" << state.hitPoints << '/' << state.hitPointsLimit << ')';

	return out;
}

