#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//ǥ�� ���̺귯�� �Լ� - cmath
	//�ݿø�
	cout << round(2.74) << endl;//��� �� : 3
	cout << round(2.14) << endl;//��� �� : 2
	cout << round(-2.74) << endl;//��� �� : -3
	cout << round(-2.14) << endl;//��� �� : -2

	//����_�Ҽ��� ���� ����
	cout << floor(2.74) << endl;//��� �� : 2
	cout << floor(-2.74) << endl;//��� �� : -3

	//���밪
	cout << abs(-8) << endl;//��� �� : 8
	cout << abs(8) << endl;//��� �� : 8

	//�ŵ�����
	cout << pow(2, 4) << endl;//��� �� : 16(2�� 4����)
	cout << pow(4, 2) << endl;//��� �� : 16(4�� 2����)

	return 0;
}