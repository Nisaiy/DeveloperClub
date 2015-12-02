#include <stdio.h>

int main() {
    int dividend, divider, max;
    
    scanf("%d %d", &dividend, &divider);
    
    if ( divider < 0 ) {
        divider = divider * (-1);
    }

    if ( dividend <= 0 || dividend % divider == 0 ) {
        max = (dividend / divider) * divider;
    } else {
        max = (dividend / divider + 1) * divider;
    }
    printf("%d\n", max);
    
    return 0;
}
