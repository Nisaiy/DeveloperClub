#include <stdio.h>

int main() {
int cell, time;
    
    scanf("%d %d", &cell, &time);

    for ( int hour = 1; hour <= time; hour ++ ) {
        printf("%dh => ", hour );
               cell = cell * 2;
            printf("%d amoeba (s)\n", cell);
        }
    return 0;
}
