#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	/*
	upand down 게임
	추측한 숫자가 맞으면 "정답입니다!", break
	게이머 숫자가 컴보다 크면 "DOWN!"
	게이머 숫자가 컴보다 작으면 "UP!"
	*/
	int i, com, guess, min = 1, max = 100;

	srand((unsigned)time(NULL)); //구간 : 0~43억
	com = rand() % 100 + 1;//컴 추측 숫자

	for (i = 0; i < 10; i++) {
		cout << "[" << i + 1 << "회]" << min << "~" << max << "사이의 값 예측 => ";
		cin >> guess;
		
		//조건 처리a
		if (guess == com) {
			cout << "정답입니다!"<<endl;
			break;
		}
		else if (guess > com) {
			cout << "DOWN!" << endl;
			max = guess;
		}
		else {
			cout << "UP!" << endl;
			min = guess;
		}
			
	}
	cout << "정답 : " << com << endl;
	cout << "최종 점수 : " << (10 - i) * 10 << endl;

	return 0;
}