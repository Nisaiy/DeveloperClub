#include <stdio.h>

int main() {
    int total, counter;
    scanf("%d", &total);
    for ( int row = 1; row <= total; row++ ) {
         counter = 1;
         for ( int col = row; col < total; col++ ) {
            printf("%d ", counter);
             counter++;
         }
         printf("%d\n", counter);
     }
     return 0;
}
