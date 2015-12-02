#ifndef ARRAY_ITERATOR_H
#define ARRAY_ITERATOR_H
#include <iostream>

class wrongIndsex{};

    template <class Type>
    class arrayIterator{
    private:
        Type *array;
        size_t size;
        size_t current;
    public:
        arrayIterator(Type *array, size_t size) : array(array), size(size-1), current(0)
        {}

        void next() {
            current += 1;
        }
        void prev() {
            current -=1;
        }

        bool over() const {
            return current >= size;
        }

        bool less() const {
            return current <= 0;
        }

        const Type& value () const{
            return array[current];
        }

        const Type& getValueIndex(size_t index) const{
            if (index > size) {
                throw wrongIndsex();
            }
            return array[index];
        } 

         void goToValueIndex(size_t index) {
            if (index > size) {
                throw wrongIndsex();
            }
            getValueIndex(index);
            current = index;
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

        Type operator * () {
            return value();
        }
    };

    #endif //ARRAY_ITERATOR_H
