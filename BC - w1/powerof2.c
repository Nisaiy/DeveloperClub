#include <stdio.h>

int main() {
    int i, a;
    int k = 1;

    scanf("%d", &a);
    
    for ( i = 0; i < a; i++ ) {
        printf("%d ", k);
                k = k + k;
    }
    printf ("%d\n", k);

    return 0;
}
