#include <stdio.h>

void arrayReverse(int array[], int size) {
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        int buffer = array[i];
        
        array[i] = array[j];
        array[j] = buffer;
    }
}

int main(){
    int size = 5;
    int array[] = {1, 2, 3, 4, 6};

    arrayReverse(array, size);

    return 0;
}