#include <stdio.h>

unsigned int average(unsigned int a, unsigned int b) {
   // return a / 2 + b / 2 + a % 2 * b % 2;
    return b + (a-b)/2;
}

int main(){
 	int a, b;
 	scanf("%u %u", &a, &b);

 	printf("%u\n", average(a, b));

 	return 0;
 }

