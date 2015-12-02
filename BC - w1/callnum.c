#include <stdio.h>

int main (){
    int number, minut;

    scanf("%d %d", &number, &minut);

    if ( number == 101 || number == 102 || number == 103 || number == 104 || number == 112 ) {
        printf("0$\n");
    } else if (number <= 999 && number >= 100 ) {
        printf("%d$\n", minut*40);
    } else if ( number >= 1000000 && number <= 9999999 ){
        printf("%d$\n", minut);
    } else {
        printf("-1\n");
    }
    return 0;
}
