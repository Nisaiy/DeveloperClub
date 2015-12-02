#include <stdio.h>


int main() {
    int plain1,  encrypted1,  plain2, encrypted2, lengs, plain;

    scanf("%d %d\n %d %d\n %d", &plain1, &encrypted1, &plain2, &encrypted2, &lengs);
    int A = ( encrypted1 - encrypted2 ) / ( plain1 - plain2 );
    int B  = encrypted1 - A * plain1;

    for ( int i  = 1; i < lengs; i++ ) {
        scanf("%d", &plain);
        plain = ( plain - B ) / A;
        printf("%d ", plain);
    }
    scanf("%d", &plain);
    plain = ( plain - B ) / A;
    printf("%d\n", plain);


    return 0;
}