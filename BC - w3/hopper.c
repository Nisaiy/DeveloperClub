#include <stdio.h>

int getNumber(FILE *in) {
    int tmp;

    fscanf(in,"%d", &tmp);
    return tmp;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int maxJump = getNumber(in);
    int cell = getNumber(in);
    double ways[cell];

    for ( int i = 0; i < maxJump; i++) {
        ways[i] = 1 << i;
    }
    printf("%d\n", ways[100]);

    for ( int i = maxJump; i < cell; i++ ) {
        double way = 0;

        for ( int j = i - maxJump; j < i; j++ ) {
            way += ways[j];
            printf("%llu ", way);
        }
        ways[i] = way;
        printf("%d\n", way);
    }

    printf("%llu\n", ways[cell-1]);

    return 0;
}
