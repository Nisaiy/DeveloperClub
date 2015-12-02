#include <stdio.h>

int main () {
    int a, b;

    scanf("%d", &a);
    b = a - a % 3;


    for ( int i = 0; i < b ; i += 3 ) {
        printf("%d_", i );
    }
    printf ("%d\n", b);

    return 0;
}
