#include "Category.h"

        std::set<Category*> Category::categories(categories);

        Category::Category (std::string nName) {
            this->name = nName;

            Items = new std::set<Item*> ();

            categories.insert(this);
        }
        Category::~Category() {
            categories.erase(this);
            std::set<Item*>::iterator it;
            for ( it = Items->begin(); it!=Items->end(); it++ ) {
                    std::cout<<*(*it)<<std::endl;
                delete *it;
            }
            delete Items;
        }


     std::set<Category*>& Category::getCategories() {
        return categories;
     }

        const std::string& Category::getName() const {
            return this->name;

        }
         const std::set<Item*>& Category::getItems() const{
        return *Items;
        }
         void Category::changeName(std::string& newName) {
            this->name = newName;
        }

        void Category::addItem(Item* newItem) {
            Items->insert(newItem);

        }
         void Category::removeItem(Item* oldItem) {
            Items->erase(oldItem);
        }

std::ostream& operator<<(std::ostream& out, const Category& category) {
    out << "we have in " << category.getName() << " category" << category.getItems();
    return out;
}