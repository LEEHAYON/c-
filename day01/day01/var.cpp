#include <iostream>
using namespace std;

int main() {
	
	//char name[10] = "이산"; // 뒤에 '\0'이 존재함
	string name = "이산";
	int grade; //학년
	//int class; //  예약어(키워드) 사용 불가
	int schoolClass; //반

	grade = 2;
	schoolClass = 5;

	
	cout << name << " 학생은 " << grade << "학년" << schoolClass << "반입니다." << endl;


	return 0;
}