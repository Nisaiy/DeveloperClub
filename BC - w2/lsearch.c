#include <stdio.h>
int arraySearch( int array[], int size, int needle ) {
    for ( int i = 0; i < size; i++ ) {
        if (array[i] == needle) {
            printf("%d\n", i);
            return i;
        } 
    }
    return -1;
}

int main(){
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    int size = 100, needle;
    int array[size];

    fscanf(in, "%d", &needle);
    for ( int i = 0; i != size && fscanf(in, "%d", &array[i]) == 1; i++ );
    fprintf(out, "%d\n", arraySearch(array, size, needle));
    //printf("%d\n", arraySearch(array, size, needle));

    fclose(in);
    fclose(out);
    return 0;
}
