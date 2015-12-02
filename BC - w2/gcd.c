#include <stdio.h>
int gcd (int a, int b) { 
    if (b == 0) {
        return a; 
    }
        return gcd (b, a % b); 
}


int main(){
    int number1, number2;

    scanf ("%d %d", &number1, &number2);
    printf("%d\n", gcd(number1, number2));

    return 0;
}