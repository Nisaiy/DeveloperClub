#include <stdio.h>
int main () {
    int a, last;

    scanf("%d", &a); 
    if ( a < 0) {
        printf("-1\n");
    } else {
    last = 1;
    
    for ( int i = 2; i <=a; i++) {
        last = last * i;
    }
    printf("%d\n", last);
}

    return 0;
}
