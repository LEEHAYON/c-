#include "config.h"

int main() {
	//최대 정수 찾기
	int arr[6] = { 2, 71, 59, 33, 94, 25 };

	char str[] = "game over!";

	int maxVal = findMax(arr, 6); //반환값 저장

	char maxChar = findChar(str);

	cout << maxVal << endl;
	cout << maxChar << endl;

	return 0;
}