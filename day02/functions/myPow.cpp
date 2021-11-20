#include <iostream>
#include <cmath>
using namespace std;

int myPow(int n, int y) {
	int res = 1;
	for (int i = 0; i < y; i++) {//i - 횟수 반복변수
		res = res * n;
	}

	return res;
}


int main() {

	int num = myPow(2, 4);
	cout << num << endl;

	return 0;
}