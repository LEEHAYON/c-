#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	//rand() 함수 사용
	
	srand(time(NULL)); //seed 자동 배정_time()

	//cout << rand() << endl;
	//rand() % 2 + 1; // 동전의 앞 뒤면
	//rand() % 6 + 1;// 주사위의 눈
	//rand() % 10 + 1;// 1부터 10까지의 무작위 수

	//주사위 10번 던지기
	/*
	int dice = rand() % 6 + 1;
	cout << dice << endl;
	*/

	for (int i = 1; i < 10; i++) {
		int dice = rand() % 6 + 1;
		cout << dice << endl;
	}

	return 0;
}