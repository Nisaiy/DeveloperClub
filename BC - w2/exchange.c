#include <stdio.h>

void arrayExchange(int array[], int len){

   int temp;
    for( int i = 1; i < len; i+=2 ){
        temp = array[i-1];
        array[i-1] = array[i];
        array[i] = temp;
    }
        //array[0] = temp;
    printf("%d", array[0]);
    printf("%d", array[1]);
    printf("%d", array[2]);
    printf("%d", array[3]);
    printf("%d", array[4]);
    printf("%d", array[5]);
    printf("%d", array[6]);
}


int main(){
    int len = 7;
    int array[] = {1, 2, 3, 4, 5, 7, 8};
    arrayExchange(array, len);

    return 0;
} 