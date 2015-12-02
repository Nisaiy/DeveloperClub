#include  <stdio.h>
int main() {
    int a, b;

    scanf("%d", &a);
    b = a - a % 5

    for ( int i = 0; i < b; i += 5 ){
        printf ("%d_", i);
}
printf("%d\n",  b);

return 0;
}

