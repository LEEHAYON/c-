#include <iostream>
using namespace std;
#define PI 3.14 //매크로 상수

int main() {

	const int MIN_NUM = 1; //int MIN_NUM은 변수이지만 const를 앞에 붙이면 '상수'로 선언된다(상수는 변경불가)
	const int MAX_NUM = 100;

	cout << MIN_NUM << endl;
	cout << MAX_NUM << endl;

	//원 넓이 계산
	int radius = 5;
	double area = 0.0;
	double circum = 0.0;

	area = PI * radius * radius;
	circum = 2 * PI * radius;
	cout << "원의 넓이 : " << area << endl;
	cout << "원의 둘레 : " << circum << endl;

	

	return 0;
}