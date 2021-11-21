#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	string name;
	int age;

	void showInfo() {
		cout << "이름 : " << this->name << endl;
		cout << "나이 : " << this->age << endl;
	}
};


//Person 상속 받음
class Employee : public Person {
public:
	int companyID;
	void showInfo();
};

