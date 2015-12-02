#include "Soldier.h"
#include "Rogue.h"
#include "Vampire.h"
#include "Werewolf.h"
#include "Wizard.h"

int main() {
    Soldier* soldier = new Soldier("Spartak");
    // Wizard* wizard = new Wizard("The sorcerer");
    // Soldier* soldier2 = new Soldier("Innokentiy");
    // Rogue* rogue = new Rogue("Solovey-razbojnik");
    // Vampire* vampire = new Vampire("Dragula");
    Werewolf* werewolf = new Werewolf("Werewolf");

    std::cout << *werewolf << std::endl;
    // std::cout << *soldier << std::endl;
    // std::cout << *soldier2 << std::endl;
    // std::cout << *wizard << std::endl;
    std::cout << *soldier << std::endl;
    // std::cout << *rogue << std::endl;

    werewolf->changeState();
    // wizard->cast("FIREBALL", soldier);
    werewolf->attack(soldier);
    // wizard->attack(soldier);
    // wizard->attack(soldier);


    werewolf->attack(soldier);
    // werewolf->attack(soldier);
    // vampire->attack(soldier2);
    // vampire->attack(soldier2);

    // soldier2->attack(soldier);
    // soldier2->attack(soldier);

    std::cout << "----------------------------------" << std::endl;

    std::cout << *werewolf<< std::endl;
    // std::cout << *werewolf << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << *soldier2 << std::endl;
    std::cout << *soldier << std::endl;



    delete soldier;
    // delete soldier2;
    // delete rogue;
    // delete vampire;
    delete werewolf;
    // delete wizard;

    return 0;
}
