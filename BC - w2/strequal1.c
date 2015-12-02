int strEqual(char str1[], char str2[]) {
    for ( int len = 1; str1[len] != 0 || str2[len] != 0; len++ ) {
        if ( str1[len] != str2[len] ) {
            return 0;
        }
    }
    return 1;
}
