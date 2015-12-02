#include <stdio.h>


void arrayShift(int array[], int size, int shift) {
    int last = size - 1;
    int tempsize = shift%size;
    int temp[tempsize];
    if (shift >=0) {
        for ( int i = 0, j = element; i < tempsize; i++, j++) {
            temp[i] = array[j];
        }
        for (int i = last, j  = last - tempsize; i > 0; i--, j--) {
            array[i] = array[j];
    }
        for ( int i = 0; i < tempsize; i++){
            array[i] = temp[i];
        }
    } else {
        tempsize = - tempsize;
        for ( int i = 0; i < tempsize; i++) {
            temp[i]=array[i];
        }
        for ( int i = 0, j = tempsize; i < element; i++, j++) {
            array[i] = array[j];
        }
        for (int i = size - tempsize, j = 0; j < tempsize; i++, j++) {
            array[i] = temp[j];
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

