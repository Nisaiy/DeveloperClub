#include <stdio.h>

int arrayUnique(int array[], int size) {
    if ( size > 0 ) {
        for ( int i = 1; i < size; i++ ) {
            int found = 0;

            for ( int j = 0; j < i; j++ ){
                if ( array[j] == array[i] ) {
                    found = 1;
                    for ( int move = i; move < size-1; move++ ) {
                        array[move] = array[move+1];
                    }
                    size -= 1;
                    j -= 1;
                    i -= 1;
                }
            }
        }
    return size;
    }
    return 0;
}





int main() {
    int size = 10;
    int array[] = { 1, 1, 4, 4, 3, 3, 3, 5, 7, 1, 1 };

    int newSize = arrayUnique(array, size);
        printf("%d\n ", newSize);

    for ( int i = 0; i < newSize; i++ ) {
        printf("%d ", array[i]);
    }
    return 0;
}
