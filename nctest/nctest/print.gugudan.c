#include <stdio.h>

void printGugudan(int dan) {
	printf("%d´Ü\n", dan);
	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}
}

int main() {
	printGugudan(6);

	return 0;
}