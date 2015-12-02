#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <set>
#include "exceptions.h"
#include "Attack.h"
#include "State.h"


class Unit {
protected:
	std::set<Unit*>* observers;
	std::set<Unit*>* observables;
	Attack* attack;
	State* curentForm;


	virtual void ensureIsAlive();

public:
	Unit(const std::string& name, int hitPoints, int dmg);
	virtual ~Unit();

	virtual const State& getState() const;
	virtual const Attack& getAttack() const;

	virtual void setName(const std::string& newName);

	virtual bool isUndead();
	virtual void changeUndead();
	virtual bool isInfected();
	const std::set<Unit*>& getObservers() const;
	const std::set<Unit*>& getObservables() const;

	void addObserver(Unit* observer);
	void removeObserver(Unit* observer);
	void addObservable(Unit* observable);
	void removeObservable(Unit* observable);

	void notifyObservers();
	void notifyObservables();

	virtual void takeDamage(int dmg);
	virtual void takeMagicDamage(int dmg);
	virtual void addHitPoints(int hp);
	virtual void changeAttack(Attack* attack);
	virtual void changeState(State* state);
	virtual void makeAttack(Unit* enemy) = 0;

};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H
