#include <stdio.h>

int takenumber ( FILE *in) {
    int number;

    fscanf(in, "%d", &number);
    return number;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    int maxJump = takenumber(in);
    int cell = takenumber(in);
    int tmp = 1;

    double ways[cell];
    ways[0] = 1;

    for (int i = 1; i < cell; i++) {
        tmp *= 2;
        ways[i] = tmp;
    }

    for ( int i = maxJump; i < cell; i++) {
        double way = 0;
        for (int j = i - maxJump; j < i; j++) {
            way += ways[j];
        }
        ways[i] = way;
    }

    fprintf(out, "%d\n", ways[cell-1]);

    return 0;
}
