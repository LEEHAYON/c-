#include <iostream>
using namespace std;

int main() {
	
	bool b = true;
	cout << b << endl; //��� �� : 1

	b = false;
	cout << "false�� ��ȯ �� b�� �� " << b << endl; //��� �� : 0

	b = 7;
	cout << "7�� ��ȯ �� b�� �� " << b << endl; //��� �� : 1, �Է°��� 0�� �ƴϸ� ��� 1�� ���

	b = 0;
	cout << "0���� ��ȯ �� b�� �� " << b << endl; //��� �� : 0

	b = (10 > 11);
	cout << "10>11�� ��ȯ �� b�� �� " << b << endl; //��� �� : 0

	b = (10 < 11);
	cout << "10<11�� ��ȯ �� b�� �� " << b << endl; //��� �� : 1

	b = (10 == 11);
	cout << "10==11�� ��ȯ �� b�� �� " << b << endl; //��� �� : 0

	b = (10 != 11);
	cout << "10!=11�� ��ȯ �� b�� �� " << b << endl; //��� �� : 1

	return 0;
}