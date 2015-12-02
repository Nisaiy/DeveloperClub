#include <stdio.h>


void arrayPrintReversed(int array[], int size) {
    for ( int i = size-1; i > 0; i-- ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[0]);
}



int main() {
    int size = 6;
    int array[] = {10, 20, 30, 40, 50, 60};
    arrayPrintReversed(array, size);

    return 0;
}
