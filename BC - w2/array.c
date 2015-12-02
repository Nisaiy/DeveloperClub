#include <stdio.h>

#define total 10

int main(){
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    int array[total];


    for (int i = 1; i < 9 i ++) {
        fscanf(in, "%d", &array[i]);
        fprintf(out, "%d_", array[i]);
    }

    fscanf(in, "%d", &array[total-1]);
    fprintf(out, "%d\n hu", array[total-1]);

    fclose(in);
    fclose(out);
    return 0;
}
