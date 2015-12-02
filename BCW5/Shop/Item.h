#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include "Category.h"
#include "Order.h"

class Category;
class Order;

class Item {
    protected:
        std::string name;
        Category* category;
        static std::set<Item*> items;

        std::set<Order*> Orders;
    public:

        Item (Category* category, std::string nName);
        ~Item();

        static std::set<Item*>& getItems();

        const std::string& getName() const;
        std::set<int*>& getOrders();


        void changeName(std::string& newName);
        // void addOrders(Order* order);
        void changeCategory();
        void changeCategory(Category* newCategory);
};
std::ostream& operator<<(std::ostream& out, const Item& item);









#endif // ITEM_H