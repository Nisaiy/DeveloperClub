#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include "Tamplate.cpp"
#include "Order.h"
#include "Item.h"


class Order;
class Item;

class Customer {
    protected:
        std::string name;
        std::set<Order*>* orders;
        static std::set<Customer*> customers;
    public:


        Customer (std::string nName);
        ~Customer();

        std::set<Customer*>& getCustomers();

        const std::string& getName() const;
        const std::set<Order*>& getOrders () const;

        Order creatNewOrder(Item* newItem);
};
std::ostream& operator<<(std::ostream& out, const Customer& customer);

#endif // CUSTOMER