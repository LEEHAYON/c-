#include <iostream>
using namespace std;

int main() {
	//1���� 10���� �հ� ���
	int sum = 0;

	for (int i = 1; i <= 10; i++) {
		cout << i << " ";
		sum += i;
	}
	cout << endl << "sum = " << sum << endl << endl;

	//1���� 10���� Ȧ���� �հ� ���
	cout << "1���� 10���� Ȧ���� �հ� ���" << endl;

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