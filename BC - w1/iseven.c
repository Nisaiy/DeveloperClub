#include <stdio.h>
int main(){
    int a;

    scanf("%d", &a);

    for ( int i = 0 ; i < a - 1; i += 2) {
        printf("%d_", i);
    }
    if ( a % 2 == 0) {
        printf("%d\n", a);
    } else {
        printf("%d\n", a - 1);
    }

return 0;
}
