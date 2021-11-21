#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//정수형 배열_초기화
	int num[] = { 1,2,3,4,5 };
	int i = 0;
	for (i = 0; i < 5; i++) {
		printf("%d\n", num[i]);
	}

	return 0;
}
