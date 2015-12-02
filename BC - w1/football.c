#include <stdio.h> 

int main () {
    int a, b;

    scanf("%d %d" , &a, &b);

    if ( a > b ) {
        printf("Home team wins\n");
    } else if ( b > a ) {
        printf("Away team wins\n");
    } else { printf("draw\n");
}

    return 0;
}
