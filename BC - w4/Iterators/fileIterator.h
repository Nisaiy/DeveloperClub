#ifndef FILE_ITERATOR_H
#define FILE_ITERATOR_H
#include <iostream>
#include <fstream>
#include <cstdlib>



    template <class Type>
    class fileIterator{
    private:
        std:: ifstream myfile;
        Type *array;
        size_t size;
        size_t current;
        size_t multiplier;
    public:
        fileIterator(const char *fileName) : myfile(fileName), size(20), current(0), multiplier( 1.25)
        {
            array = (Type*)malloc(size*sizeof(Type));
            if (myfile.is_open()) {
                myfile >> *array;
            }

        }

        void next() {
            if (current == size) {
                size_t newSize = size * multiplier;
                Type* newArray = (Type*)realloc(array, newSize*sizeof(Type));

                array = newArray;
            }
            current += 1;
            myfile >> array[current];
            
        }

        bool over() const {
            return myfile.eof();
        }


        const Type& value () const{
            return array[current];
        }

        void operator ++ () {
            next();
        }

        void operator ++(int) {
            operator++();
        }


        Type operator * () {
            return value();
        }
    };

    #endif //ARRAY_ITERATOR_H
