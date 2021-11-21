#include <iostream>
using namespace std;

void printGugudan(int); //함수 정의가 호출보다 밑에 있을때 해줘야함
int main() {

	printGugudan(5); //함수 호출

	return 0;
}

void printGugudan(int dan) {//함수 정의
	cout << dan << "단" << endl;
	for (int i = 1; i < 10; i++) {
		cout << dan << " x " << i << " = " << dan * i << endl;
	}
}