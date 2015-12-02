#include  <stdio.h>

int main() {
int array [] = {9, 5, 3, 4, 2, 6, 1, 7, 7, 10, 8};
int size = 11;
int last = size - 1;
int temp;

for( int i = 0; i < size; ) {
        if ( array[i] > array[i+1] ) {
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
            i -= 1;
        }
        i += 1;
        printf("%d\n", i);
    }

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);

return 0;
}