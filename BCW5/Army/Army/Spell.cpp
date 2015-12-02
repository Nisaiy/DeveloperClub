#include "Spell.h"
#include "stdafx.h"


Spell::Spell(const std::string& name) {
	this->name = name;
	this->cost = 30;
	this->actionPoints = 30;
}

Spell::~Spell() {}

int Spell::getCost() const {
	return cost;
}

int Spell::getActionPoints() const {
	return actionPoints;
}

const std::string& Spell::getName() const {
	return name;
}

std::ostream& operator<<(std::ostream& out, const Spell& spell) {
	out << spell.getName().c_str();
	return out;
}