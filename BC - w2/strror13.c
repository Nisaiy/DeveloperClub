#include <stdio.h>
#define ROT 13

void strRot13(char str[]) {
    int i = 0;
    
    for ( char rev = str[0]; rev != 0; i++, rev = str[i] ) {
        if ( rev >= 'A' && rev <= 'Z' - ROT ) {
            str[i] += ROT;
            //printf("%c1", str[i]);
        } else if ( rev >= 'a' && rev <= 'z' - ROT ) {
            str[i] += ROT;
            //printf("%c2", str[i]);

        } else if ( rev > 'Z' - ROT && rev <= 'Z' ) {
            str[i] = rev + 'A' - 'Z' + ROT - 1;
            //printf("%c3", str[i]);
        
        } else if ( rev > 'z' - ROT && rev <= 'z' ) {
            str[i] = rev + 'a' - 'z' + ROT - 1;
            //printf("%c4", str[i]);
        }
        printf("%c", str[i]);
    }
}

int main() {
    char str[] = { 'A', 'C', 'Y', 'Z', '1', 'c', ')', '!' };

    strRot13(str);

    return 0;
}