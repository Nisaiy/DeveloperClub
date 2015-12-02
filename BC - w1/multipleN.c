#include <stdio.h>

int main() {
    int dividend, divider, temp;
    scanf("%d %d", &dividend, &divider);
    temp = dividend - dividend % divider;

    if (divider < 0 ) {
        divider = divider*-1;
    } 
    for ( int i = 0; i < temp; i += divider ) {
        printf("%d ", i);
    }
    printf("%d\n", temp);

    return 0;
}
