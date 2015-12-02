#include "stdafx.h"
#include "Unit.h"

void Unit::ensureIsAlive() {
	if (curentForm->hitPoints == 0) {
		throw UnitIsDeadException();
	}
}

Unit::Unit(const std::string& name, int hitPoints, int dmg) {


	this->observers = new std::set<Unit*>();
	this->observables = new std::set<Unit*>();

	this->curentForm = new State(name, hitPoints, hitPoints,  this);
}

Unit::~Unit()
{
	delete observables;
	delete observers;
	delete curentForm;
	delete attack;
}

const State& Unit::getState() const {
	return *curentForm;
}

const Attack& Unit::getAttack() const {
	return *attack;
}

void Unit::setName(const std::string& newName) {
	curentForm->name = newName;
}

bool Unit::isUndead() {
	return curentForm->undead;
}

void Unit::changeUndead()
{
	curentForm->changeUnd();
}

bool Unit::isInfected() {
	return curentForm->infected;
}


void Unit::takeDamage(int dmg) {
	ensureIsAlive();

	curentForm->takeDmg(dmg);
}

void Unit::takeMagicDamage(int dmg) {
	ensureIsAlive();
	curentForm->takeMageDmg(dmg);
}

void Unit::addHitPoints(int hp) {
	ensureIsAlive();
	int total = curentForm->hitPoints + hp;

	if (total > curentForm->hitPointsLimit) {
		curentForm->hitPoints = curentForm->hitPointsLimit;
		return;
	}
	curentForm->hitPoints = total;
}

void Unit::changeAttack(Attack* attack) {
	this->attack = attack;
}

void Unit::changeState(State * state)
{
	delete curentForm;
	this->curentForm = state;
}


const std::set<Unit*>& Unit::getObservers() const {
	return *observers;
}

const std::set<Unit*>& Unit::getObservables() const {
	return *observables;
}

void Unit::addObserver(Unit* observer) {
	observers->insert(observer);
}

void Unit::removeObserver(Unit* observer) {
	observers->erase(observer);
}

void Unit::addObservable(Unit* observable) {
	observables->insert(observable);
}

void Unit::removeObservable(Unit* observable) {
	observables->erase(observable);
}

void Unit::notifyObservers() {
	std::set<Unit*>::iterator it = observers->begin();

	for (; it != observers->end(); it++) {
		(*it)->addHitPoints(curentForm->hitPointsLimit / 10);
		(*it)->removeObservable(this);
	}
	observers->clear();
}

void Unit::notifyObservables() {
	std::set<Unit*>::iterator it = observables->begin();

	for (; it != observables->end(); it++) {
		(*it)->removeObserver(this);
	}
}

void Unit::makeAttack(Unit* enemy) {
	ensureIsAlive();
	attack->attackOptin(enemy);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
	out << unit.getState();
	out << unit.getAttack();
	std::set<Unit*> observers = unit.getObservers();

	if (observers.size() == 0) {
		return out;
	}

	std::set<Unit*>::iterator it = observers.begin();
	out << " Observers: [ ";
	for (; it != observers.end(); it++) {
		out << (*it)->getState() << " ";
	}
	out << "]";

	return out;
}
