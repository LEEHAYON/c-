#include <stdio.h>

void Gugudan(int dan) {
	printf("%d´Ü\n", dan);
	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}
}

int main() {
	Gugudan(5);

	return 0;
}