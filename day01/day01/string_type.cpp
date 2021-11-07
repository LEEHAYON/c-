#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string cart = "생수"; //string - 문자열 자료형
	string cartlist[] = { "커피", "생수", "계란" }; //문자열 배열

	cout << cart << endl; //결과 값 : 생수
	cout << "*** 커피 출력 ***" << endl;
	cout << cartlist[0] << endl; //결과 값 : 커피

	cout << "*** 전체 목록 출력 ***" << endl;
	for (int i = 0; i < 3; i++) {
		cout << cartlist[i] << " ";
	}

	return 0;
}