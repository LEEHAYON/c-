#include <stdio.h>

int main() {
	//���� ����ȯ
	int num1 = 100;
	float num2 = 2.1345;

	int num = num1 * num2;

	printf("%.1lf", (float)num);

	return 0;
}