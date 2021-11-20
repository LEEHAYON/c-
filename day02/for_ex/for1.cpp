#include <iostream>
using namespace std;

int main() {
	//1부터 10까지 합계 계산
	int sum = 0;

	for (int i = 1; i <= 10; i++) {
		cout << i << " ";
		sum += i;
	}
	cout << endl << "sum = " << sum << endl << endl;

	//1부터 10까지 홀수의 합계 계산
	cout << "1부터 10까지 홀수의 합계 계산" << endl;

	int sum2 = 0;

	for (int i = 1; i <= 10; i++) {
		if (i % 2 == 1) {
			cout << i << " ";
			sum2 += i;
		}
	}
	cout << endl << "sum2 = " << sum2 << endl;
	return 0;
}