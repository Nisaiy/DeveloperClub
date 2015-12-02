#include <stdio.h> 

int main() {
    int a, b, min;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        if ( i == 0 )
        {
            min = b;
        }
        if ( min > b ) 
        {
            printf("no\n");
            return 0;
        }
            min = b;
    }
printf("yes\n");

    return 0;
}
