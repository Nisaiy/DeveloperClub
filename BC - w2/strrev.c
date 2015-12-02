#include <stdio.h>

#define ALL 101

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[ALL];
    int len;
    
    fscanf(in, "%100s", str);
    
    for ( len = 0; str[len] != 0; len++ );
    for ( int i = 0, j = len - 1; i < j; i++, j-- ) {
        int buffer = str[i];
        
        str[i] = str[j];
        str[j] = buffer;
    }
    fprintf(out, "%s", str);
    fclose(in);
    fclose(out);
    
    return 0;
}
