#ifndef WERWOLF_H
#define WERWOLF_H

#include "Soldier.h"
#include "WerwolfState.h"

// class WerwolfState;
// class Soldier;


class Werwolf : public Soldier {
public:
	Werwolf(const std::string& name, int hitPoints, int dmg);
	virtual ~Werwolf();
};

#endif //WERWOLF_H