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

//Person ��� ����
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
		cout << "�̸� : " << this->name << endl;
		cout << "���� : " << this->age << endl;
		cout << "��� : " << this->companyID << endl;
}

