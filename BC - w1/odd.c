#include <stdio.h>

int main() {
    int numb, last;

    scanf("%d", &numb);
    last = numb + 1 * (numb % 2) - 1;

    for ( int i = 1; i < last ; i += 2 ) {
        printf("%d_", i);
    }

    printf("%d\n", last);

    return 0;
}
