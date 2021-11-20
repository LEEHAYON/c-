#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//문자열 함수를 사용한 배열
	char s1[] = "game", s2[20];

	//문자열의 개수
	cout << "s1의 개수 : " << strlen(s1) << endl;

	//문자열 복사(저장)
	//잘 못 된 방법 : s2[] = "over";
	strcpy_s(s2, "over");
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;

	//문자열 비교
	cout << strcmp(s1, s2) << endl; //결과 값 : -1(다르고, 앞 쪽이 작을 때)
	cout << strcmp(s1, "game") << endl; //결과 값 : 0(같을때)
	cout << strcmp("over", s1) << endl; //결과 값 : 1(다르고, 앞 쪽이 클 때)

	return 0;
}