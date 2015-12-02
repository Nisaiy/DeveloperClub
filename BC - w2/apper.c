#include <stdio.h>


int main(){
    FILE *in = fopen ("task.in", "r");
    FILE *out = fopen ("task.out", "w");

    char i;
    for ( ; fscanf (in, "%c", &i) != EOF; ) {
        if( i >= 'a' && i <= 'z' ) {
            fprintf(out, "%c", i-32);
        } else {
            fprintf(out, "%c", i);
        }
    }
    fprintf(out, "\n");

    fclose (in);
    fclose (out);
    return 0;
}
