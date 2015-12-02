#include <stdio.h>

    int sum2(int x, int y) {
  
    return x + y;
    }

    int main() { 
    	int x, y;

    scanf("%d %d", &x, &y); 
    printf("%d\n", sum2(x, y));
	

	return 0;
}