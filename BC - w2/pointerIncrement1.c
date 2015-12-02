#include <stdio.h>

void pointerIncrement(int *value) {
    *value += 1;
}

int main (){
    int a;
    int *value;

    scanf("%d", &a);

    pointerIncrement (value);

    printf ("%d", a);

    return 0;
}