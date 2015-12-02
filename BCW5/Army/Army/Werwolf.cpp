#include "Werwolf.h"
#include "stdafx.h"

Werwolf::Werwolf(const std::string& name, int hitPoints, int dmg) : Soldier(name, hitPoints, dmg) {
	this->curentForm = new WerwolfState(name, hitPoints, hitPoints, this);
}
Werwolf::~Werwolf() {};