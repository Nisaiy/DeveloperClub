#include <stdio.h>
#define ROT 13

void strROT13(char str[]) { 
    for ( int i = 0; str[i] != '\0'; i++ ) {
        if ( str[i] >= 'A' && str[i] <= 'Z') {
            if ( str[i] + ROT <= 'Z' ) {
                str[i] = str[i] + ROT;
            } else { 
                str[i] = str[i] - ROT;
            }
        } else if ( str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] + ROT <= 'z' ) {
                str[i] = str[i] + ROT;
            } else { 
                str[i] = str[i] - ROT;
            }
        }
        printf("%c\n", str[i] );
    }
}


    int main() {
    char str[] = { 'A', 'C', 'Y', 'Z', '1', 'c', ')', '!' };

    strROT13(str);

    return 0;
}