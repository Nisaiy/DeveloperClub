void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0, last = size - 1; row < size; row++, last-- ) {
        for ( int col = 0 imba = size-1; col < size; col++, imba-- ) {
            target[row][col] = source[last][imba];
        }
    }
}
