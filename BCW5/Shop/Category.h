#ifndef CATEGORY_H
#define CATEGORY_H

#include <iostream>
#include "Tamplate.cpp"
#include "Item.h"

class Item;

class Category {
    protected:
        std::string name;
        static std::set<Category*> categories;
        std::set<Item*> *Items;
    public:


        Category (std::string nName);
        ~Category();

        std::set<Category*>& getCategories();

        const std::string& getName() const;
        const std::set<Item*>& getItems () const;
        void changeName(std::string& newName);

        void addItem(Item* newItem);
        void removeItem(Item* oldItem);
};
std::ostream& operator<<(std::ostream& out, const Category& category);

#endif // CATEGORY