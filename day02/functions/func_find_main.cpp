#include "config.h"

int main() {
	//�ִ� ���� ã��
	int arr[6] = { 2, 71, 59, 33, 94, 25 };

	char str[] = "game over!";

	int maxVal = findMax(arr, 6); //��ȯ�� ����

	char maxChar = findChar(str);

	cout << maxVal << endl;
	cout << maxChar << endl;

	return 0;
}