#include <iostream>
using namespace std;

int main() {

	int age;
	char name[20];

	cout << "����� �̸��� �Է��ϼ��� :";
	//cin >> name; // '>>' ������ ������ ����_[scanf_s���], ���� ó�� �Ұ�
	cin.getline(name, sizeof(name));// �ڷ��� ũ�⸸ŭ ó��(�ٴ���), ���� ó�� ����
	cout << "����� �̸��� " << name << "�̱���." << endl;


	cout << "����� ���̸� �Է��ϼ��� :";
	cin >> age; // '>>' ������ ������ ����_[scanf_s���]
	cout << "����� ���̴� " << age << "�� �̱���." << endl;

	
	cout << "�ݰ����ϴ�. " << age << "���� " << name << "��!" << endl;

	return 0;
}