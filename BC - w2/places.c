#include <stdio.h>

int main() {
    int number, numberplace;

    scanf("%d", &number);

    numberplace =1;

    if (number < 0) {
        number *= (-1);
        numberplace = 2;
    }

    for ( ; numberplace >= 10; ) {
        number = number/10;
        numberplace += 1;
        printf("%d\n", number );
        }


    printf("%d\n", numberplace);

    return 0;
}
