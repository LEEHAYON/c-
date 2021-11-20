#include <iostream>
using namespace std;

int main() {
	//단을 입력받아 구구단 출력하기
	int dan = 3;
	int i;

	cout << dan << "단" << endl;
	for (i = 1; i < 10; i++) {
		cout << dan << " x " << i << " = " << dan * i << endl;
	}

	//단을 입력받아 구구단 출력하기
	int dan2;
	cout << endl << "단을 입력하세요 : ";
	cin >> dan2;

	cout << dan2 << "단" << endl;
	for (i = 1; i < 10; i++) {
		cout << dan2 << " x " << i << " = " << dan2 * i << endl;
	}

	return 0;
}