#include <stdio.h>

int main() {
    int member;
    int fib[46];
    fib[0] = 0;
    fib[1] = 1;

    scanf("%d", &member);

    if( member == 1 || member == -1 ) {
        return 0;
    }

    if( member > 46 || member == 0 ) {
        return 0;
    }

    if( member < -2 ) {
        member *= -1;
    }


    for( int i = 2; i < member; i++ ) {
        fib[i] = fib[i-1] + fib[i-2];
    }


    printf("%d", fib[member]);

    return 0;
}
