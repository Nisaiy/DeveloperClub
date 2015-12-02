#include <stdio.h>

int main(){
    int amout;
    int number;

    scanf("%d", &amout);
    for ( int i = 0; i < amout; i++) {
        scanf("%d", &number);
        number = number^42;
        printf("%d\n", number);
    }
    return 0;
}
