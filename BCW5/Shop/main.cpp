#include <iostream>
#include "Category.h"
#include "Item.h"
#include "Customer.h"
#include "Order.h"


int main() {

    Category* alcohol = new Category("alcohol");
    Category* Trash = new Category("Trash");
    Item* a= new Item(alcohol, "Beer");
    Item* b = new Item (alcohol, "martiny");
    Item* c = new Item (alcohol, "vodka");
    Item* d = new Item (alcohol, "wisky");

    // Customer* N = new Customer("Bill");

    // N->creatNewOrder(a);

    // std::cout<<*N<<std::endl;



    std::cout<<*alcohol<<std::endl;

    delete alcohol;
        std::cout<<"sss"<<std::endl;
    delete Trash;

    return 0;
}


