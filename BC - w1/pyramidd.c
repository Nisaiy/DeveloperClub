#include <stdio.h>

int main() {
    int total, rows, cols;
    
    scanf("%d %d %d", &total, &rows, &cols);
    if ( rows < cols ) {
        rows = cols;
    }
    for ( int row = rows; row < total; row++ ) {
        for ( int col = cols; col < row; col++ ) {
            printf("%d ", col+1);
        }
        printf("%d\n", row+1);
    }
    
    return 0;
}
