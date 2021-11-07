#include <iostream>
using namespace std;

int main() {

	int age;
	char name[20];

	cout << "당신의 이름를 입력하세요 :";
	//cin >> name; // '>>' 방향이 변수를 향함_[scanf_s기능], 공백 처리 불가
	cin.getline(name, sizeof(name));// 자료의 크기만큼 처리(줄단위), 공백 처리 가능
	cout << "당신의 이름은 " << name << "이군요." << endl;


	cout << "당신의 나이를 입력하세요 :";
	cin >> age; // '>>' 방향이 변수를 향함_[scanf_s기능]
	cout << "당신의 나이는 " << age << "살 이군요." << endl;

	
	cout << "반갑습니다. " << age << "살의 " << name << "씨!" << endl;

	return 0;
}