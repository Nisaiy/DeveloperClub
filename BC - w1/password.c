#include <stdio.h>

int main(){
    int pass;

    for ( int i = 0; i < 5; i++) {

        scanf("%d", &pass);

        if ( pass == 1488) {
            printf("accepted\n");
            return 0;
        }
        printf("incorrect password\n");
    }
    printf("denied\n");

    return 0;
}
