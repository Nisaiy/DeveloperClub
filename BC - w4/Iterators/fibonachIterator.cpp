#include <iostream>

class fibonachIterator {
    private:
        int number;
        int firstNumber;
        int secondNumber;
        int nextNumber;
        int current;
    public:
        fibonachIterator(int number) : number(number), current(0), firstNumber(1), secondNumber(0), nextNumber(0)
        {}

        void next() {
            if ( over() ) {
                return;
            }
            nextNumber = firstNumber + secondNumber;
            firstNumber = secondNumber;
            secondNumber = nextNumber;
            current +=1;
        }
    

        bool over(){
            if (number < 1) {
                std::cout << "need natural number" <<std::endl;
                return true;
            }
            return current >= number;
        }

        void operator ++ () {
            next();
        }
        void operator ++(int) {
            operator++();
        }

        int value () {
            return nextNumber;
        }

        int operator * () {
            return value();
        }
};