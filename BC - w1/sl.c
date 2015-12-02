#include <stdio.h>

void arrayShiftLeft(int array[], int size){

    int temp = array[0];
    for(int i = 1; i < size; i++){
        array[i-1] = array[i];
    }
        array[size -1] = temp;
        //printf("%d %d || ", array[i], array[0]);
    printf("%d\n", array[0]);
    printf("%d\n", array[1]);
    printf("%d\n", array[2]);
    printf("%d\n", array[3]);
    printf("%d\n", array[4]);
    printf("%d\n", array[5]);
}


int main(){
    int size = 6;
    int array[] = {1, 2, 3, 4, 5, 7, 8};
    arrayShiftLeft(array, size);

    return 0;
} 