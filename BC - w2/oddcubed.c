#include <stdio.h>

#define squre i*i

int main() {
    int a, last, i;

    scanf("%d %d", &a, &last);

    if (a % 2 == 0) {
        a = a + 1;
    }
    if (last % 2 == 0) {
        last = last - 1;
    }
    for ( i = a; i < last; i +=2 ) {
        printf("%d ", i*squre);
    }
    printf("%d\n", last*squre);

    return 0;
}
