#include <iostream>
using namespace std;

int main() {
	char alphabets[25];
	char ch = 'a';

	//����
	for (int i = 0; i < 25; i++) {
		alphabets[i] = ch; //���ڸ� �迭�� ����
		ch++;
	}

	//���
	for (int i = 0; i < 25; i++) {
		cout << alphabets[i]<<", "<< (int)alphabets[i] << endl;
	}


	return 0;
}