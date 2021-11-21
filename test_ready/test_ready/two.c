#include <stdio.h>

int main() {
	//강제 형변환
	int num1 = 100;
	float num2 = 2.1345;

	int num = num1 * num2;

	printf("%.1lf", (float)num);

	return 0;
}