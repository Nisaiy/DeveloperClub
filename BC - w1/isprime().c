#include <stdio.h>

int isPrime(int n){

}

int main() {
    int a;
    scanf("%d", &a);

    for ( int i = 2; i < a; i++) {
        if ( a % i == 0 ) {
            printf("%d\n", i);
        } else {
            printf("lol\n");
        }
    }
    return 0;
}