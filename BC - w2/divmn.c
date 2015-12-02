#include <stdio.h>

int main() {
    int min, max, m, n, step;
    scanf ("%d %d %d %d", &min, &max, &m, &n);

    if ( m > n ) { 
        if  ( min > 0 && min % m != 0) {
            min = min + m;
        } 
        min = min / m * m;
        step = m;
    } else {
        if  ( min > 0 && min % n != 0) {
            min = min + n;
        }
        min = min / n * n;
        step = n;
    }
    for (int i = min; i <= max; i += step ) {
        if ( i % n == 0 && i % m == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
