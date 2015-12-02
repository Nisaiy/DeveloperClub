# include "WerwolfState.h"
#include "stdafx.h"

WerwolfState::WerwolfState(const std::string& nName, int nHitPoints, int nHitPointsLimit, Unit* owner) : 
	State(nName, nHitPoints, nHitPointsLimit, owner) {
	name = nName + "[Human]";
	altHitPoins = nHitPoints * 2;
	altHitPointsLimit = nHitPointsLimit * 2;
	altName = nName + "[Werwolf]";
	infected = true;
	transformed = false;
	altAttack = new WerwolfAttack (owner, owner->getAttack().damage*2);
}

WerwolfState::~WerwolfState() {};

void WerwolfState::transform() {
	

	int tmpHitPoins = this->hitPoints;
	int tmpHitPointsLimit = this ->hitPointsLimit;
	std::string tmpName = this->name;

	this->name = altName;
	this->hitPoints = altHitPoins;
	this->hitPointsLimit = altHitPointsLimit;


	altName = tmpName;
	altHitPoins = tmpHitPoins;
	altHitPointsLimit = tmpHitPointsLimit;

	double coef = (double)altHitPoins / (double)altHitPointsLimit;
	this->hitPoints = (int)((double)this->hitPointsLimit * coef);

	transformed = !transformed;

	Attack* tmpAttack = ((Attack*)&owner->getAttack());
	owner->changeAttack(altAttack);
	altAttack = ((WerwolfAttack*)tmpAttack);
	
}

void WerwolfState::takeMageDmg(int dmg)
{ 
	if (transformed == true) {
		takeDmg(dmg * 2);
	}
	else
	{
		takeDmg(dmg);
	}
}


