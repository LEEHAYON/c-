#include <iostream>
using namespace std;

int main() {
	//논리형 자료형 - bool
	//0이 아닌 값은 모두 1, 출력은 1 or 0
	bool t = true; //입력(저장)
	bool f = false;

	int iTrue = true;
	int iFalse = false;


	cout << t << endl; //결과 값 : 1
	cout << f << endl; //결과 값 : 0
	cout << iTrue << endl; //결과 값 : 1
	cout << iFalse << endl; //결과 값 : 0

	cout << "bool형 t의 크기 : " << sizeof(t) << "byte" << endl;
	cout << "bool형 f의 크기 : " << sizeof(f) << "byte" << endl;
	cout << "int형 iTrue의 크기 : " << sizeof(iTrue) << "byte" << endl;
	cout << "int형 iFalse의 크기 : " << sizeof(iFalse) << "byte" << endl;

	return 0;
}