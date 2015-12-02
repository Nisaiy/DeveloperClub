#include <stdio.h>

#define ALL 101
#define ROT 13


int main() {
    FILE *in = fopen ("task.in", "r");
    FILE *out = fopen ("task.out", "w");

    char str[ALL];
    fscanf(in, "%100s\n", str);

    for ( int i = 0; i < 100 || str[i] != 0; i++ ) {
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
        printf("%c", str[i]);
    }
    printf("\n");

    fclose (in);
    fclose (out);

    return 0;
}
