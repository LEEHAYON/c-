#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
	long start, end;
	start = time(NULL);//���۽ð�
	//cout << start << "��" << endl;
	
	for (int i = 0; i < 100; i++) {
		cout << i << endl;
		Sleep(100);//0.1��
	}

	end = time(NULL);//����ð�
	cout << "for�� ���� �ð� : " << (end - start) << "��" << endl;


	//ȥ��
	int min = start / 60;
	int h = min / 60;
	int day = h / 24;
	int year = day / 365;

	cout << year << "��" << h % 24 << "��" << endl;

	return 0;
}