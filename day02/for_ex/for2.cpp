#include <iostream>
using namespace std;

int main() {
	//1���� 5���� ���ϱ�
	int times = 1;//���ϱ⶧���� �ʱ�ȭ�� 1��
	for (int i = 1; i <= 5; i++) {
			cout << i << " ";
			times *= i;
	}
	cout << endl << "times = " << times;
	//i=1,1x1 -> 1! times=1
	//i=2,1x2 -> 2! times=2
	//i=3,2x3 -> 3! times=6
	//i=4,6x4 -> 4! times=24
	//i=5,24x5 -> 5! times=120

	return 0;
}