#include <iostream>
using namespace std;

int main() {
	/*
	�Է� ó��
	y - "��� �ݺ�"
	n - "�ݺ� �ߴ�"
	�� ���� Ű - "�� �� �������ϴ�."
	*/
	
	char key;


	//���� ó��
	while (true) {
		cout << "��� �ݺ��ұ��? : ";
		cin >> key;
		if (key == 'y'||key == 'Y') {
			cout << "�ݺ��� �����ϼ̽��ϴ�." << endl;
		}
		else if(key == 'n' || key == 'N') {
			cout << "�ݺ� �ߴ�" << endl;
			break;
		}
		else {
			cout << "�� �� �������ϴ�." << endl << "�ٽ� �Է����ּ���. : ";
			cin >> key;
		}
	}
	cout << "���α׷� ����!" << endl;

	return 0;
}