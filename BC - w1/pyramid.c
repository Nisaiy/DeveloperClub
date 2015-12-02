#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);
    for (int row = 1; row <= a; row++ ) {
        for (int col = 1; col < row; col++ ) {
            printf("%d ", col);
        }
                    printf("%d\n", row);
    }


    return 0;
}
