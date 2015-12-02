#include "pen.h"
#include "paper.h"
#include <string>



        Pen::Pen(int inkCapacity) :
        inkCapacity(inkCapacity)
        {
            inkAmount = inkCapacity;
        }
        Pen::~Pen() {}

        int Pen::getInkAmount() const {
            return this->inkAmount;
        }
        int Pen::getInkCapacity() const {
            return this->inkCapacity;
        }

        void Pen::write(Paper& paper, const std::string& message) {
            std::string newMessage = message;
            int spacebars = 0;

            try {
                if (inkAmount == 0) {
                    throw OutOfInk();
                } 
                                for (int i = 0; newMessage[i] != NULL; i++ ) {
                    if ( newMessage[i] == ' ')  {
                        spacebars += 1;
                    }
                }
                inkAmount += spacebars;
                newMessage = message.substr(0, inkAmount);
                paper.addContent(newMessage);
                std::cout << spacebars << std::endl;
                inkAmount -= newMessage.size();

                std::cout << inkAmount<< std::endl;
                if (inkAmount == 0) {
                    throw OutOfInk();
                } 
            } catch (OutOfInk) { 
                    std::cout << "need to refill"<< std::endl;
                }
        }


        void Pen::refill() {
            inkAmount = inkCapacity;
        }