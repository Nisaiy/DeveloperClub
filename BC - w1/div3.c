#include <stdio.h>

int main() {
    int min, max, divider;
    
    scanf("%d %d %d", &min, &max, &divider);
    if ( min > 0 && min % 3 != 0 ) {
        min = min + 3;
    }
    min = min / 3 * 3;
    
    for ( int i = min; i <= max; i += 3 ) {
        printf("%d\n", i);
    }
    
    return 0;
}
