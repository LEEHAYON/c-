#include <iostream>
using namespace std;

int main() {
	//���� �ڷ��� - bool
	//0�� �ƴ� ���� ��� 1, ����� 1 or 0
	bool t = true; //�Է�(����)
	bool f = false;

	int iTrue = true;
	int iFalse = false;


	cout << t << endl; //��� �� : 1
	cout << f << endl; //��� �� : 0
	cout << iTrue << endl; //��� �� : 1
	cout << iFalse << endl; //��� �� : 0

	cout << "bool�� t�� ũ�� : " << sizeof(t) << "byte" << endl;
	cout << "bool�� f�� ũ�� : " << sizeof(f) << "byte" << endl;
	cout << "int�� iTrue�� ũ�� : " << sizeof(iTrue) << "byte" << endl;
	cout << "int�� iFalse�� ũ�� : " << sizeof(iFalse) << "byte" << endl;

	return 0;
}