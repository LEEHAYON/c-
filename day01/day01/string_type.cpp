#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string cart = "����"; //string - ���ڿ� �ڷ���
	string cartlist[] = { "Ŀ��", "����", "���" }; //���ڿ� �迭

	cout << cart << endl; //��� �� : ����
	cout << "*** Ŀ�� ��� ***" << endl;
	cout << cartlist[0] << endl; //��� �� : Ŀ��

	cout << "*** ��ü ��� ��� ***" << endl;
	for (int i = 0; i < 3; i++) {
		cout << cartlist[i] << " ";
	}

	return 0;
}