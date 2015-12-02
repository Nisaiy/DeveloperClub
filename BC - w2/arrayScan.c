#include <stdio.h>

int arrayScan(FILE *in, int array[], int limit) {
    int i;
    for ( i = 0; i != limit && fscanf(in, "%d", &array[i]) == 1; i++ );
    return i;
}



int main(){
    FILE *in = fopen ("task.in", "r");

    int limit = 8;
    int array[limit];
    printf("%d\n", arrayScan(in, array, limit));

    fclose(in);

    return 0;
}


