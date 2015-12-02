#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a - a % b;

    for ( int i = 0; i < c; i += sqrt(sqr(b) ) {
        printf("%d ", i);
    }
    printf("%d\n", c);

    return 0;
}
