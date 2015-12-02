#include "Customer.h"


       std::set<Customer*> Customer::customers(customers);

        Customer::Customer (std::string nName){
            this->name = nName;
            orders = new std::set<Order*> ();
            customers.insert(this);
        }
        Customer::~Customer(){
            customers.erase(this);
            delete orders;
        }

         std::set<Customer*>& Customer::getCustomers() {
            return customers;
         }

        const std::string& Customer::getName() const{
            return this->name;
        }
        const std::set<Order*>& Customer::getOrders () const{
            return *orders;
        }

        Order Customer::creatNewOrder(Item* newItem){
            order = new Order(this, newItem)
            orders->insert(order);
            return order;
        }

        std::ostream& operator<<(std::ostream& out, const Customer& customer) {
            out << customer.getName() << " have this orders" << customer.getOrders();
        }