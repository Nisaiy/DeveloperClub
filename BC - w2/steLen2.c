#include <stdio.h>

#define ALL 101

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[ALL];
    int len;
    
    fscanf(in, "%100s", str);
    
    for ( len = 0; str[len] != 0; len++ );
    fprintf(out, "%d\n", len);
    fclose(in);
    fclose(out);
    return 0;
}
