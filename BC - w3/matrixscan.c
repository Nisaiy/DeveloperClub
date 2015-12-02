#include <stdio.h>

#define SIZE 3

void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            fscanf(in, "%d", &matrix[col][row]);
        }
    }
}

void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0, last = size - 1; col < size; col++, last-- ) {
            target[row][col] = source[last][row];
        }
    }
}


void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
    int last = size - 1;
    
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < last; col++ ) {
            fprintf(out, "%d ", matrix[col][row]);
        }
        fprintf(out, "%d\n", matrix[last][row]);
    }
}



int main(){
    FILE *in = fopen ("task.in", "r");
    FILE *out = fopen ("task.out", "w");
    int size = 3;
    int matrix [SIZE][SIZE];
    int target[SIZE][SIZE];

    matrixScan (in, matrix, size);
    matrixRotate270(target, matrix, size);
    matrixPrint (out, target, size);


    fclose (in);
    fclose (out);
    return 0;
}