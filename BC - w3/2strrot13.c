#include <stdio.h>

#define ALL 101
#define ROT 13


int main() {
    FILE *in = fopen ("task.in", "r");
    FILE *out = fopen ("task.out", "w");

    char str[ALL];
    int len;
    fscanf(in, "%101s\n", str);

    for ( len = 0; str[len] != 0; len++ );

    for ( int i = 0; i < len || str[i] != 0; i++ ) {
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
        fprintf(out, "%c", str[i]);
    }
    fprintf(out, "\n");

    fclose (in);
    fclose (out);

    return 0;
}
