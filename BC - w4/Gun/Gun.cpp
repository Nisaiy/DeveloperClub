#include "gun.h"

        Gun::Gun(const std::string& model, int capacity) :
        model(model),
        capacity(capacity),
        amount(0),
        totalShots(0),
        isReady(false){}
        
        Gun::~Gun(){};

        int Gun::getAmount() const{
            return this->amount;
        }
        int Gun::getCapacity() const{
            return this->capacity;
        }
        bool Gun::ready() const{
            return this->isReady;
        }
        const std::string& Gun::getModel() const{
            return this->model;
        }
        int Gun::getTotalShots() const{
            return this->totalShots;
        }

        void Gun::prepare(){
            isReady = !isReady;
        }

        void Gun::reload(){
            this->amount = capacity;
        }
        void Gun::shoot(){
            if (isReady == false) {
                throw NotReady ();
            }
            if (amount == 0) {
                throw OutOfRounds();
            }
            amount -=1;
            totalShots +=1;
            std::cout << "Bang!" <<std::endl;
        }

        std::ostream& operator<<(std::ostream& out, const Gun& gun) {
            out << "model"<<" "<<gun.getModel()<<std::endl;
            out << "capacit"<<" "<<gun.getCapacity()<<std::endl;
            out << "amount"<<" "<<gun.getAmount()<<std::endl;
            out << "ready"<<" "<<gun.ready()<<std::endl;
            out << "totalShots"<<" "<<gun.getTotalShots()<<std::endl;
            return out;
        }