#include <stdio.h>

int main (){
    int a, b;
    int k = 1;

    scanf ("%d %d", &a, &b);

    for ( int i = 0; i < b; i++ ) {
        printf("%d ", k);
        k = a * k;
    }
    printf("%d\n", k);
    return 0;
}
