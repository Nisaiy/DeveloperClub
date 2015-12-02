

void matrixMultiply(int matrix[SIZE][SIZE], int size, int multiplier) {
    for ( int row = 0; row < size; row++ ) {
        for (int col = 0; col < size; col++ ) {
            matrix[col][row] *= multiplier;
        }
    }
}