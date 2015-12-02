

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int i = 0;
    int j = 0;
    int k = 0;

    for ( ; j < len1 && k < len2; i++ ) {
        if ( scr1[j] < scr2[k] ) {
            target[i] = src1[j];
            j += 1;
        } else {
            target[i] = scr2[k];
            k += 1;
        }
    }
    for ( ; j < len1; j++, i++) {
        target[i] = scr1[j];
    }
    for ( ; k < len2; k++, i++) {
        target[i] = scr2[k];
    }
}
