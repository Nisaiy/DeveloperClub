#include <stdio.h>

int scan(FILE *in) {
    int count = 0;

    for ( char j; fscanf(in, "%c", &j) != EOF; ) {
        count += 1;
    }
return count;
}
void fill(FILE *in, char array[]) {
    int i = 0;
    for ( char j; fscanf(in, "%c", &j) != EOF; ) {
        array[i] = j;
        i += 1;
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int count;
    int len = scan(in);
    fclose(in);
    char array[len];

    fopen("task.in", "r");
    fill(in, array);
    fclose(in);
    
    for ( char i = 'a'; i <= 'z'; i++ ) {
        count = 0;
        for ( int j = 0; j < len; j++ ) {
                if ( i == array[j] || i == array[j] + 32 ) {
                    count += 1;
                }
        }
        if ( count > 0 ) {
            printf( "%c %d\n", i, count);
        }
    }
    fclose(out);
    return 0;
}
