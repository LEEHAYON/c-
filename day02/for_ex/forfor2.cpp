#include <iostream>
using namespace std;

int main() {
	//2차원 행렬 -> 중첩 for
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 1; j <= 5; j++) {
			int num = i * 5 + j;
			cout << num << " ";
		}
		cout << endl;
	}

	return 0;
}