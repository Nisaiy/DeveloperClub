#include "Soldier.h"
#include "VampireAttack.h"

class Vampire : public Soldier{
public:
	Vampire(const std::string& name, int hitPoints, int dmg);
	virtual ~Vampire();
};

