#include <iostream>
using namespace std;
#define VALUE 10;

int main() {

	const int value1 = 10; //����� ����
	const int value2 = 20; //����� ����
	const int value3 = 30; //����� ����
	//value1 = 20; ����Ұ�
	int sum = value1 + value2 + value3 + VALUE;
	//����� ������ �������� ������ ���� ����

	cout << sum << endl;


	return 0;
}