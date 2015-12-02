#include <stdio.h>

void sliceReverse(int array[], int lo, int hi) {

 for ( ; lo < hi; lo++, hi-- ) {
        int buffer = array[lo];
        
        array[lo] = array[hi];
        array[] = buffer;
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
    int lo, hi;
    int len = 7;
    int array[] = {1, 2, 3, 4, 5, 7, 8};
    scanf("%d %d", &lo, &hi);
    for ( int i = 0; i < len; i++ ) {
        printf("%d", array[i]);
    }
    printf("\n");
    sliceReverse(array, lo, hi);

    return 0;
} 