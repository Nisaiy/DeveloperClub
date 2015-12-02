#include <stdio.h>

int strLen(char str[]) {
    int i;
    for ( i = 0; str[i] != 0 ; i++ );
        return i;
}

int  main(){
    char str[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    printf("%d", strLen(str));

    return 0;
}