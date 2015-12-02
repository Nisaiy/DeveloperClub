#include <stdio.h>

void arrayShiftRight(int array[], int size){

    int temp = array[size-1];
    for(int i = size-1; i > 0 ; i-- ){
        array[i] = array[i+1];
    }
        array[0] = temp;
        //printf("%d %d || ", array[i], array[0]);
    printf("%d", array[0]);
    printf("%d", array[1]);
    printf("%d", array[2]);
    printf("%d", array[3]);
    printf("%d", array[4]);
    printf("%d", array[5]);
}


int main(){
    int size = 6;
    int array[] = {1, 2, 3, 4, 5, 7};
    arrayShiftRight(array, size);

    return 0;
} 