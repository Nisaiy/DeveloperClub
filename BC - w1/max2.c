#include <stdio.h> 

int max2 (int x, int y) {

  if ( x > y )
  	return x;
  
  return y;
  
}

int main() {
 int a, b;

	scanf("%d %d", &a, &b);
	printf("%d\n", max2 (a, b));

	return 0;
}
