#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//���ڿ� �Լ��� ����� �迭
	char s1[] = "game", s2[20];

	//���ڿ��� ����
	cout << "s1�� ���� : " << strlen(s1) << endl;

	//���ڿ� ����(����)
	//�� �� �� ��� : s2[] = "over";
	strcpy_s(s2, "over");
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;

	//���ڿ� ��
	cout << strcmp(s1, s2) << endl; //��� �� : -1(�ٸ���, �� ���� ���� ��)
	cout << strcmp(s1, "game") << endl; //��� �� : 0(������)
	cout << strcmp("over", s1) << endl; //��� �� : 1(�ٸ���, �� ���� Ŭ ��)

	return 0;
}