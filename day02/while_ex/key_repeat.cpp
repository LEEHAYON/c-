#include <iostream>
using namespace std;

int main() {
	/*
	입력 처리
	y - "계속 반복"
	n - "반복 중단"
	그 외의 키 - "잘 못 눌렀습니다."
	*/
	
	char key;


	//조건 처리
	while (true) {
		cout << "계속 반복할까요? : ";
		cin >> key;
		if (key == 'y'||key == 'Y') {
			cout << "반복을 선택하셨습니다." << endl;
		}
		else if(key == 'n' || key == 'N') {
			cout << "반복 중단" << endl;
			break;
		}
		else {
			cout << "잘 못 눌렀습니다." << endl << "다시 입력해주세요. : ";
			cin >> key;
		}
	}
	cout << "프로그램 종료!" << endl;

	return 0;
}