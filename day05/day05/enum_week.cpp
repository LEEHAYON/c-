#include <iostream>
using namespace std;

enum WEEK { //������ ����� �빮�ڷ� ǥ��
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
		cout << "�Ͽ��� �Դϴ�." << endl;
		break;
	case MON:
		cout << "������ �Դϴ�." << endl;
		break;
	case TUE:
		cout << "ȭ���� �Դϴ�." << endl;
		break;
	case WED:
		cout << "������ �Դϴ�." << endl;
		break;
	case THR:
		cout << "����� �Դϴ�." << endl;
		break;
	case FRI:
		cout << "�ݿ��� �Դϴ�." << endl;
		break;
	case SAT:
		cout << "����� �Դϴ�." << endl;
		break;
	default:
		cout << "������ �����ϴ�." << endl;
		break;
	}

	return 0;
}