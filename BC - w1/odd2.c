#include <stdio.h>

int main() {
    int min, max, i;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 == 0 ) {
        min = min + 1;
    }
    if ( max % 2 == 0 ) {
        max = max - 1;
    }
    for ( i = min; i < max; i += 2 ) {
        printf("%d ", i);
    }
    printf("%d\n", max);
    
    return 0;
}
