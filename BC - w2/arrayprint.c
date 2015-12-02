#include <stdio.h>

void arrayPrint(FILE *out, int array[], int size){
    int last = size - 1;
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d", array[last]);
}


int main() {
    FILE *out = fopen("task.out", "w");
    int size = 6;
    int array[] = {10, 20, 30, 40, 50, 60};
    arrayPrint( out, array, size);

    fclose (out);

    return 0;
}