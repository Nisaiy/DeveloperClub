#include <stdio.h>

int isPrime(int n) {
    if ( n < 2 ) {
        return 0;
    }
    if ( n % 2 == 0 && n != 2 ) {
        return 0;
    }
    for ( int i = 3; i < n / 2; i += 2 ) {
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int a;
    int j = 2;

    scanf("%d", &a);
    if ( a < 1 ) {
        printf("-1\n");
        return 0;
    }
    for (int count = 0; count < a; ) {
        if (isPrime(j) == 1) {
            count += 1; 
        }
        j += 1;
    }
    printf("%d\n", j-1);
    return 0;
}