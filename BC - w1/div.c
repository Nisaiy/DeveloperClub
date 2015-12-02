#define s ()


#include <stdio.h> 
int main() {

    int a, b;
    
    scanf("%d %d", &a, &b);
    if ( a % 2 != 0) {
        a = a+1;
    }

    for ( int i = a; i <= b; i+=2 ) {
        printf("%d\n", i);
    }

    return 0;
}
