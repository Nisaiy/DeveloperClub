#include <stdio.h>


void arrayShift(int array[], int size, int shift) {
    int last = size - 1;
    int ebala = shift%size;
    int temp[ebala];

    if ( shift > 0 ) {
        for ( int j = 0, i = size - shift; j < ebala; j++, i++ ) {
            temp[j] = array[i];
        }
        for ( int j = last, i = last - shift; j > 0; j--, i-- ) {
            array[j] = array[i];
        }
        for ( int j = 0; j < ebala; j++ ) {
            array[j] = temp[j];
        }
    } else {
        ebala = -ebala;
        for ( int j = 0; j < ebala; j++ ) {
            temp[j] = array[j];
        }
        for ( int j = 0, i = shift; j < size-shift; j++, i++ ) {
            array[j] = array[i];
        }
        for ( int j = size - shift, i = 0; j < ebala; j++, i++ ) {
            array[j] = temp[i];
        }
    }
}




int main() {
    int size = 10;
    int shift;
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,0};

    scanf("%d", &shift);
    for ( int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    arrayShift(array, size, shift);
    for ( int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

