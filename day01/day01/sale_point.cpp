#include <iostream>
using namespace std;

int main() {

	int money, point;
	char memberInfo[30]; //�̸��� ��ȭ��ȣ
	//���� ����Ʈ =  ���űݾ� * 5%

	cout << "�̸��� ��ȭ��ȣ�� �Է��ϼ��� : ";
	cin.getline(memberInfo, sizeof(memberInfo));

	cout << "���� �ݾ��� �Է����ּ��� : ";
	cin >> money;
	point = money * 0.05;
	cout << "���� ����Ʈ�� " << point << "�� �Դϴ�.";

	return 0;
}