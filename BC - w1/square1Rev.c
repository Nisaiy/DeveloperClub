#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int row = 1, counter = size * ( size - 1 ) + 1; row <= size; row++ ) {
        for ( int col = 1; col < size; col++, counter++ ) {
            printf("%d_", counter);
        }
        printf("&%d\n", counter);
        counter -= size * 2 - 1;
    }

    return 0;
}
