#include "paper.h"
#include <string>

        Paper::Paper(int maxSymbols):
        maxSymbols(maxSymbols),
        symbols(0),
        content()
        {
        }

        Paper::~Paper(){}

        int Paper::getMaxSymbols() const{
            return this->maxSymbols;
        }
        int Paper::getSymbols() const{
            return this->symbols;
        }

        void Paper::addContent(const std::string& message) {
            int freespace = maxSymbols - symbols;

            try {
                    if (symbols == maxSymbols) {
                        throw OutOfSpace();
                    }
                content += message.substr(0, freespace);
                    if (message.size() + symbols > freespace) {
                    symbols = this->content.size();
                    throw OutOfSpace();
                    }
            symbols = this->content.size();
                } catch (OutOfSpace) {
                    std::cout << "need new Paper" << std::endl;
                }
        }



        void Paper::show() const{
            std::cout << content << std::endl;
        }