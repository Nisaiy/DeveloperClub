#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    if ( a > 0 ) {
        a = a + 3;
    }
    a = a / 3 * 3;
    
    for ( int i = a; i <= b; i += 3 ) {
        printf("%d\n", i);
    }
    
    return 0;
}
