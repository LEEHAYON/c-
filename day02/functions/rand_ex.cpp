#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	//rand() �Լ� ���
	
	srand(time(NULL)); //seed �ڵ� ����_time()

	//cout << rand() << endl;
	//rand() % 2 + 1; // ������ �� �ڸ�
	//rand() % 6 + 1;// �ֻ����� ��
	//rand() % 10 + 1;// 1���� 10������ ������ ��

	//�ֻ��� 10�� ������
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