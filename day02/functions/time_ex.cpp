#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
	long start, end;
	start = time(NULL);//시작시간
	//cout << start << "초" << endl;
	
	for (int i = 0; i < 100; i++) {
		cout << i << endl;
		Sleep(100);//0.1초
	}

	end = time(NULL);//종료시간
	cout << "for문 수행 시간 : " << (end - start) << "초" << endl;


	//혼자
	int min = start / 60;
	int h = min / 60;
	int day = h / 24;
	int year = day / 365;

	cout << year << "년" << h % 24 << "일" << endl;

	return 0;
}