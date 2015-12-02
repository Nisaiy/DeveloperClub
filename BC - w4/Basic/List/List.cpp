#include "list.h"
#include <iostream>
#include <stdlib.h> 


        List::List(int capacity, double multiplier)
        :capacity(capacity)
        ,current(0)
        ,multiplier(multiplier)
        {
            array = (int*)malloc(capacity*sizeof(int));

            if (array == NULL) {
                throw OutOfMemoryException();
            }

        }
        List::~List(){
            free (array);
        }

        int List::size() const{
            return this->current;
        }

        int List::max_size() const{
            return this->capacity;
        }

        void List::erase(int index){
            array[index] = 0;
        };

        void List::insert(int value, int index){
            if (index >= current) {
                throw  OutOfMemoryException();
            }
            this->array[index] = value;
        }

        int List::find(int value) const{

            for ( int i = 0; i < current; i++ ) {

                if (array[i] == value) {
                    return i;
                } 
            }
            return -1;
        }

        void List::push_back(int value){
            int newCurrent = current + 1;

            if ( newCurrent > capacity ) {
                int newCapacity = capacity * multiplier;
                int * newArray = (int*)realloc(array, newCapacity*sizeof(int));

                if ( newArray == NULL ) {
                throw OutOfMemoryException();
            }

            capacity = newCapacity;
            array = newArray;
        }
        array[current] = value;
        current = newCurrent;
    }

        int List::pop_back(){
            if ( current == 0 ) {
                throw ZeroLenException();
            }
            current -= 1;
            return array[current];
        }
        void List::sort(){
            int temp;

            for ( int i = 0; i < capacity; i++ ) {
                for ( int j = i + 1; j < capacity; j++ ) {
                    if ( array[i] > array[j] ) {
                        temp = array[i];
                        array[i] = array[j];
                        array[j] = temp;
                    }
                }
            }
        }

        int List::operator[](int index) const{
            return array[index];
        }

        bool List::operator==(const List& other) const{
            return this->capacity == other.capacity, this->current == other.current;
        }

        bool List::operator!=(const List& other) const{
            return !operator == (other);
        }


        std::ostream& operator<<(std::ostream& out, const List& list) {
            int last = list.size() - 1;
            
            for ( int i = 0; i < last; i++ ) {
                out << list[i] << ' ';
            }
            out << list[last];
            return out;
        }
