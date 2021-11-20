#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//표준 라이브러리 함수 - cmath
	//반올림
	cout << round(2.74) << endl;//결과 값 : 3
	cout << round(2.14) << endl;//결과 값 : 2
	cout << round(-2.74) << endl;//결과 값 : -3
	cout << round(-2.14) << endl;//결과 값 : -2

	//내림_소수점 이하 버림
	cout << floor(2.74) << endl;//결과 값 : 2
	cout << floor(-2.74) << endl;//결과 값 : -3

	//절대값
	cout << abs(-8) << endl;//결과 값 : 8
	cout << abs(8) << endl;//결과 값 : 8

	//거듭제곱
	cout << pow(2, 4) << endl;//결과 값 : 16(2의 4제곱)
	cout << pow(4, 2) << endl;//결과 값 : 16(4의 2제곱)

	return 0;
}