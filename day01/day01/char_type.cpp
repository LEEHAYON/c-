#include <iostream>
using namespace std;

int main() {
	//문자 자료형
	char ch = 'a';
	char ch2[3] = "한"; //3byte가 필요함
	char ch3[] = "\uD55C";

	cout << "ch = " << ch << endl;
	cout << "ch 아스키값 = " << (int)ch << endl; //아스키코드 값이 나옴
	cout << "ch2 = " << ch2 << endl;
	cout << "ch2 아스키값 = " << (int)ch2 << endl;
	cout << "ch3 = " << ch3 << endl;

	char cart[] = "계란";
	cout << "cart = " << cart << endl;


	return 0;
}