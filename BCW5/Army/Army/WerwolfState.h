#ifndef WERWOLF_STATE_H
#define WERWOLF_STATE_H

#include "State.h"
#include "WerwolfAttack.h"

class HumanAttack;

class WerwolfState : public State {
public:
	int altHitPoins;
	int altHitPointsLimit;
	std::string altName;
	WerwolfAttack* altAttack;

	bool transformed;



	WerwolfState(const std::string& nName, int nHitPoints, int nHitPointsLimit, Unit* owner);
	~WerwolfState();

	virtual void transform();
	virtual void takeMageDmg(int dmg);
};


#endif  // WERWOLF_STATE_H