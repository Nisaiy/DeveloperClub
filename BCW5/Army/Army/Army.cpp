// Army.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Rogue.h"
#include "Vampire.h"
#include "Healer.h"
#include "Priest.h"
#include "Necromanser.h"








int main() {


	Soldier* sol = new Soldier("Walera", 200, 30);
	Berserker* sol1 = new Berserker("Toha", 250, 40);
	SpellBook* book = new SpellBook();
	Fireball* ball = new Fireball("Fireball");
	Heal* heal = new Heal("Holy light");
	Rogue* rog = new Rogue("Valira", 150, 100);
	Vampire* vamp = new Vampire("Dracula", 350, 35);

	book->insertSpell(ball);
	book->insertSpell(heal);


	Necromancer * wiz = new Necromancer("Medivh", 150, 15, 600, book);
	Werwolf* wer = new Werwolf("Sedogriv", 200, 30);

	//std::cout << *sol << std::endl;
	std::cout << *sol1 << std::endl;
	std::cout << *rog << std::endl;
	std::cout << *vamp << std::endl;
	std::cout << *wiz << std::endl;

	wiz->changeSpell();

	//std::cout << *wer << std::endl;

	//((WerwolfState*)&wer->getState())->transform();

	//sol1->makeAttack(sol);

	//std::cout << *wer << std::endl;
	std::cout << *sol << std::endl;
	//std::cout << *sol1 << std::endl;
	std::cout << *vamp << std::endl;

	wiz->cast(sol);
	wiz->cast(vamp);

	//std::cout << *sol << std::endl;
	//std::cout << *sol1 << std::endl;

	std::cout << *sol << std::endl;
	std::cout << *vamp << std::endl;
	std::cout << *wiz << std::endl;

	rog->makeAttack(wiz);

	std::cout << *wiz << std::endl;

	rog->makeAttack(vamp);
	rog->makeAttack(vamp);
	rog->makeAttack(vamp);
	rog->makeAttack(vamp);

	std::cout << *wiz << std::endl;


	std::cout << vamp->isUndead() << std::endl;

	//((WerwolfState*)&wer->getState())->transform();

	//std::cout << *wer << std::endl;

	//std::cout << *wiz << std::endl;
	//std::cout << *sol << std::endl;


	return 0;
}
