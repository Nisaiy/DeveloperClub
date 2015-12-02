#include "Order.h"

        int  Order::lastId = 0;
        std::set<Order*> Order::orders(orders);


        Order::Order (Customer* customer, Item* item) {
            this->customer = customer;
            items = new std::set<Item*> ();
            items->insert(item);
            lastId +=1;
            this->id = lastId;
            orders.insert(this);
            // item->addOrder(this);
            }
        Order::~Order() {
            orders.erase(this);

            
        }


            std::set<Order*>& Order::getOrders(){
                return orders;
            }

        const int Order::getId() const {
            return this->id;
        }
        const std::set<Item*>& Order::getItems() const {
            return *items;
        }
        const Customer getCustomer() const {
            return customer;
        }

        void Order::addItem(Item* newItem) {
            items->insert(newItem);
            newItem->addOrder(this)
        }

        void Order::removeItem(Item* oldItem) {
            items->erase(oldItem);
            oldItem->removeItem(this);
        }


std::ostream& operator<<(std::ostream& out, const Order& order) {
    out << "in order " << order.getId() << "we have this " << order.getItems();
}

