#include <iostream>
using namespace std;

int main() {
	//1���� 30���� �ڿ��� ���
	int n = 0, count=0;
	while (n < 30) {
		n++;
		cout << n << " ";
	}

	//3�� ��� ���
	cout <<endl<<"3�� ���"<< endl;
	n = 0;
	while (n < 30) {
		n++;
		if (n % 3 == 0) {
			count++;
			cout << n << " ";
		}
	}
	cout << endl;
	cout << "����� ���� : " << count << endl;

	return 0;
}