#include <stdio.h>

int main(){
    int number, base, counter;

    scanf("%d %d", &number, &base);


    for (counter =1; counter < number; ){
         counter *= base;
    }
    if ( number > 0 ) {
        printf("1");
    } else {
        printf("0");
    }

    for ( ; counter > 1 ; ) {
        if (number >= counter) {
            number = number - counter;
        } else {
            counter/=base;
        }
        printf("%d", number/counter);
    }
    for ( ;counter > 1; ){
        printf("0");
        counter/=base;
    }

    return 0;
}
