#include <iostream>
#include "unit.h"

int main() {
    Unit barbarian("Barbarian", 8, 4);
    Unit knight("Knight", 7, 7);

std::cout << barbarian << std::endl;
std::cout << knight << std::endl;

barbarian.attack(knight);
knight.attack(barbarian);


std::cout << barbarian << std::endl;
std::cout << knight << std::endl;

    return 0;
}
