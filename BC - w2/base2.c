#include <stdio.h>

int main() {
    int number, base, a;
    int t = 1;

    scanf("%d %d", &number, &base);
    
    if ( number > 0 ) {
        for ( ; t <= number / base; t *= base );
    } else {
        t *= -1;
        for ( ; t >= number / base; t *= base );
        if ( number < t ) {
            a = number / t;
            if ( a < 10 ) {
                printf("-%d", a);
            } else {
                printf("-%c", a+55);
            }
            number %= t;
            number *= -1;
            t /= base;
            t *= -1;
        }
    }
    
    for ( ; t >= base; t /= base ) {
        a = number / t;
        
        if ( a < 10 ) {
            printf("%d", a);
        } else {
            printf("%c", a+55);
        }
        number %= t;
    }
    
    if ( number < 10 ) {
        printf("%d\n", number);
    } else {
        printf("%c\n", number+55);
    }
    
    return 0;
}
