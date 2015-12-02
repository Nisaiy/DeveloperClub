
#include "Item.h"

    std::set<Item*> Item::items(items);

  Item::Item (Category* category, std::string nName) {
    this->name = nName;
    this->category = category;

    category->addItem(this);

    items.insert(this);
  }

        Item::~Item(){
            // std::set<Order*>::iterator it = Orders->begin();
            // for (int i = Items->size(); i > 0; it++, i--) {
            // }
            items.erase(this);
        }

            std::set<Item*>& Item::getItems() {
                return items;
            }


        const  std::string& Item::getName() const{
            return name;
        }


        // std::set<int*>& Item::getOrders(){
        //     return *Orders;
        // }
        void Item::changeName(std::string& newName){
            this->name = newName;
        }


        void Item::addOrders(Order* order) {
            Orders->insert(order);
        }

        void Item::removeOrder(Order* order){
            Orders ->erase(order);
        }

         void Item::changeCategory() {
            this->category = NULL;
         }

        void Item::changeCategory(Category* newCategory){
            category->removeItem(this);

            this->category = newCategory;

            category->addItem(this);
        }

        std::ostream& operator<<(std::ostream& out, const Item& item){
            out << item.getName();
            return out;
        }
