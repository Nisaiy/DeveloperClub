#include <iostream>
#include "list.h"

int main() {

    List* a =  new List(5, 1.5);

    std::cout <<*a<< std::endl;
    std::cout <<a->max_size()<< std::endl;

    a->push_back(1);
    std::cout <<*a<< std::endl;
    a->push_back(3);
    std::cout <<*a<< std::endl;
    a->push_back(5);
    std::cout <<*a<< std::endl;
    a->push_back(4);
    std::cout <<*a<< std::endl;
    a->push_back(2);
    std::cout <<*a<< std::endl;
    a->push_back(6);
    std::cout <<*a<< std::endl;
    a->sort();
    std::cout <<*a<< std::endl;
    a->insert(6, 1);
    std::cout <<a->max_size()<< std::endl;
    std::cout <<a->size()<< std::endl;
    std::cout <<*a<< std::endl;
    a->pop_back();
    std::cout <<*a<< std::endl;

    std::cout<< a->find(2) <<std::endl;

    delete (a);
    return 0;
}
