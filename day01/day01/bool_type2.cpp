#include <iostream>
using namespace std;

int main() {
	
	bool b = true;
	cout << b << endl; //결과 값 : 1

	b = false;
	cout << "false로 변환 후 b의 값 " << b << endl; //결과 값 : 0

	b = 7;
	cout << "7로 변환 후 b의 값 " << b << endl; //결과 값 : 1, 입력값이 0이 아니면 모두 1로 출력

	b = 0;
	cout << "0으로 변환 후 b의 값 " << b << endl; //결과 값 : 0

	b = (10 > 11);
	cout << "10>11로 변환 후 b의 값 " << b << endl; //결과 값 : 0

	b = (10 < 11);
	cout << "10<11로 변환 후 b의 값 " << b << endl; //결과 값 : 1

	b = (10 == 11);
	cout << "10==11로 변환 후 b의 값 " << b << endl; //결과 값 : 0

	b = (10 != 11);
	cout << "10!=11로 변환 후 b의 값 " << b << endl; //결과 값 : 1

	return 0;
}