#include <stdio.h>

int main() {
    int dividend, counter = 0;
    
    scanf("%d", &dividend);
    
    for ( int i = 1; i <= dividend/2; i++ ) {
        if ( dividend % i == 0) {
            counter = counter + 1;
        }

    }
    printf("%d\n", counter);
    
    return 0;
}
