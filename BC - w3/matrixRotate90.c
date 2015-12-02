void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    int last = size -1;
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++){
            target[row][col] = source[last-col][row];
        }
    }
}
