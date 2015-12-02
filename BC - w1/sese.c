#include <stdio.h>
int main() {
    int a, b, max;
    scanf ("%d", &a);
        
    for ( int i = 0; i < a; i++) {
        scanf ("%d", &b);
        if ( i == 0 ) {
            max = b;
        }
        if ( max < b ) {
            max = b;
        }
    }
    printf("%d\n", max );

return 0;
}
