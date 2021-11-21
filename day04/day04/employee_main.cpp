#include "employee.h"

int main() {
	Employee e1 = Employee("이채연",23);
	Employee e2 = Employee("김예린",23);
	Employee e3 = Employee();


	//e1.name = "이채연";
	//e1.age = 23;
	e3.setName("박셋");
	e3.setAge(35);

	e1.showInfo();
	e2.showInfo();
	e3.showInfo();


	/*
	▼ showInfo로 대체

	cout << "이름 : " << e1.getName() << endl;
	cout << "나이 : " << e1.getAge() << endl;

	cout << "이름 : " << e2.getName() << endl;
	cout << "나이 : " << e2.getAge() << endl;

	cout << "이름 : " << e3.getName() << endl;
	cout << "나이 : " << e3.getAge() << endl;
	*/

	return 0;
}