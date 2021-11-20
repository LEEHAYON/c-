#include <iostream>
#include <cmath>
using namespace std;

int myAbs(int x) {
	if (x < 0)
		return -x;
	else
		return x;
}


int main() {
	
	int num = myAbs(-3);//반환값 받는 변수
	int num2 = myAbs(3);//반환값 받는 변수


	cout << num << endl;
	cout << num2 << endl;

	return 0;
}