#include <iostream>
using namespace std;

int main() {
	//���� �Է¹޾� ������ ����ϱ�
	int dan = 3;
	int i;

	cout << dan << "��" << endl;
	for (i = 1; i < 10; i++) {
		cout << dan << " x " << i << " = " << dan * i << endl;
	}

	//���� �Է¹޾� ������ ����ϱ�
	int dan2;
	cout << endl << "���� �Է��ϼ��� : ";
	cin >> dan2;

	cout << dan2 << "��" << endl;
	for (i = 1; i < 10; i++) {
		cout << dan2 << " x " << i << " = " << dan2 * i << endl;
	}

	return 0;
}