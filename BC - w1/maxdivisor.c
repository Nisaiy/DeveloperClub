#include <stdio.h>

int main (){
    int a;

    scanf("%d", &a);

    for ( int i = 2; i <= a/2; i++ ) {
        if ( a % i == 0 ){
            printf("%d\n", a / i);
            return 0;
        }
    }

            printf("0\n");

    return 0;
}
