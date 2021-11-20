#include <iostream>
using namespace std;

int main() {
	//1부터 30까지 자연수 출력
	int n = 0, count=0;
	while (n < 30) {
		n++;
		cout << n << " ";
	}

	//3의 배수 출력
	cout <<endl<<"3의 배수"<< endl;
	n = 0;
	while (n < 30) {
		n++;
		if (n % 3 == 0) {
			count++;
			cout << n << " ";
		}
	}
	cout << endl;
	cout << "배수의 개수 : " << count << endl;

	return 0;
}