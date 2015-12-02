#include "stdafx.h"

template <class Type>
std::ostream& operator << (std::ostream& out, const std::vector<Type>& lst) {
	typename std::vector<Type>::const_iterator it = lst.begin();
	int j = 1;
	for (int i = lst.size(); i > 1; it++, i--) {
		out << "on page " << j << " this spell " << *(*it) << std::endl;
		j++;
	}
	out << "on page " << j << " this spell " << *(*it) << std::endl;
	return out;
}

SpellBook::SpellBook() {
	book = new std::vector<Spell*>();
}
SpellBook::~SpellBook() {
	delete book;
}

const std::vector<Spell*>& SpellBook::getSpells() const {
	return *book;
}

void SpellBook::insertSpell(Spell* spell) {
	book->push_back(spell);
}

int SpellBook::bookSize() {
	return book->size();
}

Spell* SpellBook::getSpell(int place) {
	return book->at(place);
}


std::ostream& operator<<(std::ostream& out, const SpellBook& book) {
	out << book.getSpells() << std::endl;
	return out;
}