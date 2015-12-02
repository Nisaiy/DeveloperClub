#include <stdio.h>

int main() {
    int dividend, divider, max;
    
    scanf("%d %d", &dividend, &divider);
    
    if ( divider < 0 ) {
        divider = divider * (-1);
    }
    max = (dividend / divider +1) * divider;

    if ( dividend <= 0 || dividend % divider == 0 ) {
        max = max + divider;
    } 

    printf("%d\n", max);
    

    return 0;
}
