#include <stdio.h>

void strLowerCase(char str[]) {
    int i = 0;
    
    for ( ; str[i] != 0; i++ ) {
        char rev = str[i];
        if ( rev >= 'A' && rev <= 'Z' ) {
            rev += 32;
            //str[i] += 32;
        }
        printf("%c", rev);
        printf("%c\n", str[i]);
    }
}

int  main(){
    char str[] = {'a', 'b', 'C', 'd', 'e', 'f', 'G'};
    strLowerCase(str);

    return 0;
}
