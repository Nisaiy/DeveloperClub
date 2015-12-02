#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include "Item.h"
#include "Customer.h"

class Item;
class Customer;

class Order {
    protected:
         int id;
         Customer* customer;
         std::set<Item*> *items;
         static std::set<Order*> orders;
    public:
        static int lastId;
        Order (Customer* customer, Item* item);
        ~Order();

        std::set<Order*>& getOrders();

        const int getId() const;
        const std::set<Item*>& getItems() const;
        const Customer getCustomer() const;

        void addItem(Item* newItem);
        void removeItem(Item* oldItem);
};
std::ostream& operator<<(std::ostream& out, const Order& order);









#endif // ORDER_H