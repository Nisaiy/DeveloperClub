#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);
    for (int row = 1, counter = 1; row <= a; row++ ) {
        for (int col = 1; col < row; col++, counter++) {
            printf("%d ", counter);
        }
                    printf("%d\n", counter);
                    counter = counter += 1;
    }


    return 0;
}
