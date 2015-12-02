#include <stdio.h>

int getLen(FILE *in) {
    int size;
    
    fscanf(in, "%d", &size);
    return size;
}

void scan(FILE *in, int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
}

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int partition(int array[], int lo, int hi) {
    int mid = (lo + hi) / 2;
    int temp = array[hi];
    int tail = lo;
    
    array[hi] = array[mid];
    array[mid] = temp;
    for ( ; array[tail] < array[hi]; tail++ );
    for ( int i = tail + 1; i < hi; i++ ) {
        if ( array[i] < array[hi] ) {
            temp = array[tail];
            array[tail] = array[i];
            array[i] = temp;
            tail += 1;
        }
    }
    temp = array[tail];
    array[tail] = array[hi];
    array[hi] = temp;
    return tail;
}

void quickSort(int array[], int lo, int hi) {
    if ( lo < hi ) {
        int pivot = partition(array, lo, hi);
        
        quickSort(array, lo, pivot-1);
        quickSort(array, pivot+1, hi);
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int len = getLen(in);
    int array[len];
    
    scan(in, array, len);
    quickSort(array, 0, len-1);
    arrayPrint(out, array, len);
    
    fclose(in);
    fclose(out);
    return 0;
}
