#include <stdio.h>

int main(){
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    int size = 100, needle;
    int array[size];
    int checker = 0;

    fscanf(in, "%d", &needle);
    for ( int i = 0; i != size && fscanf(in, "%d", &array[i]) == 1; i++ ) {
        if (needle == array[i]) {
            fprintf(out, "%d\n", i);
     checker=1;
        }
    }
    if (checker == 0){
       fprintf(out, "-1\n");
    }

    fclose(in);
    fclose(out);
    return 0;
}
