#include <stdio.h>

void strUpperCase(char str[]) {
    for ( int i = 0; str[i] != 0; i++ ) {
        if ( str[i] >= 'a' && str[i] <= 'z' ) {
            printf("%c", str[i]-32);
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}



int main(){

    char str[] = {'a', 'b', 'C'};
    strUpperCase(str);
    return 0;
}
