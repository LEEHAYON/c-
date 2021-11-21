#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	string name;
	int age;

	Person(string name, int age);
};

Person::Person(string name, int age) {
	this->name = name;
	this->age = age;
}

//Person 상속 받음
class Employee : public Person {
public:
	int companyID;

	Employee(int companyID=0, string name="unnamed", int age=0);
	void showInfo();
};

Employee::Employee(int companyID, string name, int age) : Person(name, age) {
	this->companyID = companyID;
}

void Employee::showInfo(){
		cout << "이름 : " << this->name << endl;
		cout << "나이 : " << this->age << endl;
		cout << "사번 : " << this->companyID << endl;
}

