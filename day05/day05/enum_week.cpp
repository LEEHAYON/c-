#include <iostream>
using namespace std;

enum WEEK { //열거형 상수는 대문자로 표기
	SUN = 1,
	MON,
	TUE,
	WED,
	THR,
	FRI,
	SAT
};

int main() {
	enum WEEK week;

	week = FRI;

	//cout << week << endl;

	switch (week) {
	case SUN:
		cout << "일요일 입니다." << endl;
		break;
	case MON:
		cout << "월요일 입니다." << endl;
		break;
	case TUE:
		cout << "화요일 입니다." << endl;
		break;
	case WED:
		cout << "수요일 입니다." << endl;
		break;
	case THR:
		cout << "목요일 입니다." << endl;
		break;
	case FRI:
		cout << "금요일 입니다." << endl;
		break;
	case SAT:
		cout << "토요일 입니다." << endl;
		break;
	default:
		cout << "요일이 없습니다." << endl;
		break;
	}

	return 0;
}