#include <stdio.h>

#define ALL 101

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char source[ALL];
    char target[ALL];
    int len;
    
    fscanf(in, "%100s", source);
    
     for ( len = 0; source[len] != 0; len++) {
        target[len] = source[len];
     }
     target[len] = 0;
printf("%s", target);

    fclose(in);
    fclose(out);
    return 0;
}
