#include <stdio.h>

int all(FILE *in) {
    int number;
    
    fscanf(in, "%d", &number);
    return number;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = all(in);
    int array[size];
    
    for ( int i = 0; i < size - 1; i++ ) {
        fscanf(in, "%d", &array[i]);
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
        fprintf(out, "%d ", array[i]);
    }
    fscanf(in, "%d", &array[size-1]);
    if ( array[size-1] < 0 ) {
        array[size-1] *= -1;
    }
    fprintf(out, "%d\n", array[size-1]);
    fclose(in);
    fclose(out);
    return 0;
}
