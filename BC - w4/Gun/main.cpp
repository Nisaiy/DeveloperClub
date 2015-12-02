#include <iostream>
#include "gun.h"

int main() {
    Gun *a = new Gun("Colt", 6);

    std::cout << *a << std::endl;
    a->reload();
    std::cout << *a << std::endl;
    a->prepare();
    try {
        a->shoot();
        a->shoot();
        a->shoot();
        a->shoot();
        a->shoot();
        a->shoot();
        a->shoot();
    } catch (OutOfRounds) {
        std::cout << "we nead to reload" << std::endl;
    } catch (NotReady) {
        std::cout << "get ur gun from ur ass" << std::endl;
    }
    a->reload();
    try {
        a->shoot();
        a->shoot();
        a->shoot();
        a->shoot();
        a->shoot();
        a->shoot();

    } catch (OutOfRounds) {
        std::cout << "we nead to reload" << std::endl;
    } catch (NotReady) {
        std::cout << "get ur gun from ur ass" << std::endl;
    }
    a->prepare();

    std::cout << *a << std::endl;

    delete (a);
    return 0;
}