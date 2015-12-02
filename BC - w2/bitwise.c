#include <stdio.h>
#define TOTAL 2

int main() {
    FILE *in = fopen ("task.in", "r");
    FILE *out = fopen ("task.out", "w");

    int array[TOTAL];
    fscanf(in, "%d %d", &array[0], &array[TOTAL-1]);
    fprintf(out, "%d & %d = %d\n", array[0], array[TOTAL-1], array[0]&array[TOTAL-1]);
    fprintf(out, "%d | %d = %d\n", array[0], array[TOTAL-1], array[0]|array[TOTAL-1]);
    fprintf(out, "%d ^ %d = %d\n", array[0], array[TOTAL-1], array[0]^array[TOTAL-1]);
    fprintf(out, "%d << %d = %d\n", array[0], array[TOTAL-1], array[0]<<array[TOTAL-1]);
    fprintf(out, "%d >> %d = %d\n", array[0], array[TOTAL-1], array[0]>>array[TOTAL-1]);
fclose(in);
fclose(out);

return 0;
}