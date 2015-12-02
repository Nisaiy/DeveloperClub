#ifndef ROGUE_H
#define ROGUE_H
#include "Unit.h"
#include "RogueAttack.h"

class Rogue : public Soldier {
public:
	Rogue(const std::string& name, int hitPoints, int dmg);
	virtual ~Rogue();
};

#endif //ROGUE_H

