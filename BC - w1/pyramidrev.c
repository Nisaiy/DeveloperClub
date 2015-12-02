#include <stdio.h>

int main() {
    int total, col;
    
    scanf("%d", &total);
    
    for ( int row = total; row >= 1; row-- ) {
        for ( col = 1; col < row; col++ ) {
            printf("%d ", col);
        }
        printf("%d\n", col);
    }
    
    return 0;
}
