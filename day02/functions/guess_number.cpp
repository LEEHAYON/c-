#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	/*
	upand down ����
	������ ���ڰ� ������ "�����Դϴ�!", break
	���̸� ���ڰ� �ĺ��� ũ�� "DOWN!"
	���̸� ���ڰ� �ĺ��� ������ "UP!"
	*/
	int i, com, guess, min = 1, max = 100;

	srand((unsigned)time(NULL)); //���� : 0~43��
	com = rand() % 100 + 1;//�� ���� ����

	for (i = 0; i < 10; i++) {
		cout << "[" << i + 1 << "ȸ]" << min << "~" << max << "������ �� ���� => ";
		cin >> guess;
		
		//���� ó��a
		if (guess == com) {
			cout << "�����Դϴ�!"<<endl;
			break;
		}
		else if (guess > com) {
			cout << "DOWN!" << endl;
			max = guess;
		}
		else {
			cout << "UP!" << endl;
			min = guess;
		}
			
	}
	cout << "���� : " << com << endl;
	cout << "���� ���� : " << (10 - i) * 10 << endl;

	return 0;
}