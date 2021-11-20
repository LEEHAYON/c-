#include <iostream>
using namespace std;

int main() {
	//2차원 행렬 -> 중첩 for
	/*
	int i, j;

	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			cout << i << " x " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
	*/
	//단보다 작거나 같은 값만 출력하기
	int i, j;

	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			cout << i << " x " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
	return 0;
}