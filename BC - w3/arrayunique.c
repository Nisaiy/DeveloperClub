#include <stdio.h>

int arrayUnique(int array[], int size) {
    int dublicatesAmount = 0;
    int lastUnique;
    int nextInsertedUniqueIndex;

    for ( int insertedElementIndex = 0; insertedElementIndex < size; insertedElementIndex++ ) {
        int minIndex = insertedElementIndex;
        int minValue = array[insertedElementIndex];
        
        for ( int j = insertedElementIndex + 1; j < size; j++ ) {
            if ( array[j] < minValue ) {
                minValue = array[j];
                minIndex = j;
            }
        }
        if ( insertedElementIndex != minIndex ) {
            array[minIndex] = array[insertedElementIndex];
            array[insertedElementIndex] = minValue;
        }
    }

    lastUnique = array[0];
    nextInsertedUniqueIndex = 1;
    for ( int i = 1; i < size; i++ ) {
        if  ( array[i] == lastUnique  ) {
            int lastDublicateIndex = i;
            int nextUniqueElementIndex = i + 1;

            for ( ; nextUniqueElementIndex < size || array[nextUniqueElementIndex] != lastUnique; nextUniqueElementIndex++ );

            if ( nextUniqueElementIndex == size ) {
                i = size;
            }  else {
                lastUnique = array[nextUniqueElementIndex];
                array[nextInsertedUniqueIndex] = lastUnique;
                nextInsertedUniqueIndex += 1;
                i = nextUniqueElementIndex + 1;
            }

        } else {
            lastUnique = array[i];
            nextInsertedUniqueIndex += 1;
        }
    }
    return nextInsertedUniqueIndex;

}

int main() {
    int size = 10;
    int array[] = { 3, 3, 4, 5 , 4, 5, 7, 9, 8, 1 };

    //int newSize = arrayUnique(array, size);
        printf("%d\n ", arrayUnique(array, size));

    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    return 0;
}
