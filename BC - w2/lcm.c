#include <stdio.h>

int gcd (int a, int b) {
    if ( b == 0 ){
        return a;
    }
        return gcd( b, a%b );
}


int main(){
        FILE *in = fopen("task.in", "r");
        FILE *out = fopen("task.out", "w");

        int a, b;

        fscanf(in, "%d %d", &a, &b);

        a = a/gcd(a, b) * b;
        fprintf(out, "%d\n", a);

        fclose(in);
        fclose(out);
        return 0;
}
