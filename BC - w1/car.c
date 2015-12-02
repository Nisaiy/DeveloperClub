#include <stdio.h>

int main() {
	int speed, law;

	scanf( "%d %d", &speed, &law);

	if (speed <= law) {
		printf("ok\n");
		} else { printf("moran!!\n");
	}

	return 0;
}
