#include <stdio.h>

int intScan(FILE *in) {
    int len;
    
    fscanf(in, "%d", &len);
    return len;
}

void arrayScan(FILE *in, int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
}

void merge(int array[], int lo, int mid, int hi) {
    int avarage = hi - lo;
    int temp[avarage];
    int index = 0;
    int i, j;
    
    for ( i = lo, j = mid; i < mid && mid < hi; index++ ) {
        if ( array[i] < array[j] ) {
            temp[index] = array[i];
            i += 1;
        } else {
            temp[index] = array[j];
            j += 1;
        }
    }
    
    for ( ; i < mid; i++, index++ ) {
        temp[index] = array[i];
    }
    
    for ( ; j < hi; j++, index++ ) {
        temp[index] = array[j];
    }
    
    for ( i = lo, index = 0; i < hi; i++, index++ ) {
        array[i] = temp[index];
    }
}

int arrayPrint(FILE *out, int array[], int len) {
    int last = len - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
    
    return 0;
}

void mergeSort(int array[], int lo, int hi) {
    int mid = (lo + hi) / 2;

    if ( lo == mid ) {
        return;
    }
    mergeSort(array, lo, mid);
    mergeSort(array, mid, hi);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int len = intScan(in);
    int array[len];
    int lo = 0;
    int hi = len;

    arrayScan(in, array, len);

    mergeSort(array, lo, hi);
    arrayPrint(out, array, len);
        
    fclose(in);
    fclose(out);

    return 0;
}
