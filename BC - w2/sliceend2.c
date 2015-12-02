#include <stdio.h>

void sliceShiftRight(int array[], int start, int end) {
    if ( start < end ) {
        int temp = array[end];
        
        for ( int i = end; i > start; i-- ) {
            array[i] = array[i-1];
        }
        array[start] = temp;
    }

        //printf("%d %d || ", array[i], array[0]);
    printf("%d", array[0]);
    printf("%d", array[1]);
    printf("%d", array[2]);
    printf("%d", array[3]);
    printf("%d", array[4]);
    printf("%d", array[5]);
    printf("%d", array[6]);
}


int main(){
    int start,end;
    int len = 7;
    int array[] = {1, 2, 3, 4, 5, 7, 8};
    scanf("%d %d", &start, &end);
    for ( int i = 0; i < len; i++ ) {
        printf("%d", array[i]);
    }
    printf("\n");
    sliceShiftRight(array, start, end);

    return 0;
} 