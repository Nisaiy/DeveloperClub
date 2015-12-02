#include "SpellCaster.h"
#include "stdafx.h"

SpellCaster::SpellCaster(const std::string& name, int hitPoints, int dmg, int nMana, SpellBook* book) : Unit(name, hitPoints, dmg) {
	this->mana = nMana;
	this->manaLimit = nMana;

	this->spell = NULL;
	this->book = book;

	bool warmage = true;
}

SpellCaster::~SpellCaster() {
}

int SpellCaster::getMana() const {
	return this->mana;
}

int SpellCaster::getManaLimit() const {
	return this->manaLimit;
}

bool SpellCaster::getType()const {
	return this->warmage;
}


void SpellCaster::spendMana(int cost) {
	ensureIsAlive();

	if (cost > this->mana) {
		throw OutOfManaException();
	}
	this->mana -= cost;
}

void SpellCaster::addMana(int extra) {
	ensureIsAlive();
	int total = this->mana + extra;

	if (total > this->manaLimit) {
		this->mana = this->manaLimit;
		return;
	}
	this->mana = total;
}

void SpellCaster::changeSpell() {
	std::cout << *book;
	std::cout << "choose your page!" << std::endl;
	int a;
	std::cin >> a;

	if (a > book->bookSize()) {
		throw wrongPageException();
	}

	this->spell = book->getSpell(a - 1);
}

void SpellCaster::cast(Unit* target) {
	if (spell == NULL) {
		throw noSpellException();
	}
	spendMana(spell->getCost());
	this->spell->action(this, target);
}

void SpellCaster::makeAttack(Unit* enemy) {
	Unit::makeAttack(enemy);
}

std::ostream& operator<<(std::ostream& out, const SpellCaster& sc) {
	out << *((Unit*)(&sc)) << " mana(";
	out << sc.getMana() << "/" << sc.getManaLimit() << ")";
	return out;
}
