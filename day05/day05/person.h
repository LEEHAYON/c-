#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	string name;
	int age;

	void showInfo() {
		cout << "�̸� : " << this->name << endl;
		cout << "���� : " << this->age << endl;
	}
};


//Person ��� ����
class Employee : public Person {
public:
	int companyID;
	void showInfo();
};

