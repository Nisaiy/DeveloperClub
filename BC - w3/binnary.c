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
    char array[len];
    int flag;
    int mem = len - 1;

    fclose(in);
    fopen("task.in", "r");
    fill(in, array);
    fclose(in);
    count = 0;
    for ( int i = 0; i < len; i++) {
        if (array[i] == '1') {
                flag = 0;
            for ( int j = len - 1; j > i && flag == 0; j-- ) {
                if ( array[j] == '0' ) {
                    flag = 1;
                    array[i] = 0;
                    array[j] = 1;
                    count += 1;
                    i -= 1;
                }
            }
        }
    }
    fprintf(out, "%d\n", count);

    fclose(out);
    return 0;
}
