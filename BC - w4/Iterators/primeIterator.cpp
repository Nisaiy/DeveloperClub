#include <iostream>
#include <cstdlib>
#include <cmath>

class InvalidIndex{};

class primeIterator {
    private:
    int limit;
    int *array;
    int current;
    int size;
    public:
        primeIterator(int limit) : limit(limit), current(1), size(1)
            {
            array = (int*)malloc(limit*sizeof(int));

            array[current] = 2;
        }

        void next() {
    if ( size == current ) {
        for ( int i = array[current] + 1; i <= i; i++ ) {
            bool prime = true;

            for ( int j = 2; j <= sqrt(i); j++ )  {
                if ( i % j == 0 ) { 
                    prime = false;
                    break;
                }
            }
            if ( prime ) {
                current += 1;
                size = current;
                array[current] = i;
                break;
            }
        }
    } else {
        current += 1;
    }
        }

        void prev() {
            if ( less() ) {
                return;
            }
            current -= 1;
        }

    void jumpToIndex(int index) {
    if ( index < 1 ) {
        throw InvalidIndex();
    }

    if ( index > size ) {
        current = size;

        for ( int i = size; i < index; i++ ) {
            next();
        }
    } else {
        current = index;
    }
}
int getValueAtIndex(int index) {
    int tempCurrent = current;

    jumpToIndex(index);

    index = current;
    current = tempCurrent;

    return array[index];
}

    void reset() {
        current = 1;
    }

        bool over(){
            return current >= limit;
        }

        bool less(){
            return  current < 1;
        }

                int value () {
            return array[current];
        }

        void operator ++ () {
            next();
        }
        void operator ++(int) {
            operator++();
        }

                void operator --() {
            prev();
        }
        void operator --(int) {
            operator--();
        }

         int operator[](int index) {
    return array[index];
}

        int operator * () {
            return value();
        }
};