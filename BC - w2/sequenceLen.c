#include <stdio.h>
int main () {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    int len = 0;
    int i;
    for ( ; fscanf(in, "%d", &i) == 1; len += 1 ) {
        if ( len>=100 ) {
            fprintf(out, "%d\n", len);
            fclose(in);
            fclose(out);
            return 0;
        }
    }
    fprintf(out, "%d\n", len);

    fclose (in);
    fclose (out);
    return 0;
}
