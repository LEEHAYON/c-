#include "employee.h"

int main() {
	//
	int num[] = { 1, 2, 3, 4 };

	Employee employee[3] = {
		Employee("捞快林", 25),//按眉 积己凳
		Employee("辫拳己", 23),
		Employee("炼快己", 28)
	};

	//employee[0].showInfo();

	for (int i = 0; i < 3; i++) {
		employee[i].showInfo();
	}
	

	return 0;
}