#include <stdio.h>

#define ALL 101

int strEqual(char str1[], char str2[]) {
    for ( int len = 1; str1[len] != 0 || str2[len] != 0; len++ ) {
        if ( str1[len] != str2[len] ) {
            return 0;
        }
    }
    return 1;
}


int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str1[ALL], str2[ALL];
    int len;
    int i;
    
    fscanf(in, "%100s", str1);
    fscanf(in, "%100s", str2);

    for ( len = 1; str1[len] != 0; len++ );
    for ( len = 1; str2[len] != 0; len++ );
        if ( strEqual(str1, str2) == 1) {
            printf("yes\n");
        } else {
            printf("no\n");
        }

    fclose(in);
    fclose(out);
    return 0;
}
