#include <iostream>
using namespace std;

void printGugudan(int); //�Լ� ���ǰ� ȣ�⺸�� �ؿ� ������ �������
int main() {

	printGugudan(5); //�Լ� ȣ��

	return 0;
}

void printGugudan(int dan) {//�Լ� ����
	cout << dan << "��" << endl;
	for (int i = 1; i < 10; i++) {
		cout << dan << " x " << i << " = " << dan * i << endl;
	}
}