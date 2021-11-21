#include <iostream>
using namespace std;
#define VALUE 10;

int main() {

	const int value1 = 10; //상수형 변수
	const int value2 = 20; //상수형 변수
	const int value3 = 30; //상수형 변수
	//value1 = 20; 변경불가
	int sum = value1 + value2 + value3 + VALUE;
	//상수의 개수가 많아지면 불편한 점이 많음

	cout << sum << endl;


	return 0;
}