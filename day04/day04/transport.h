#pragma once//양쪽에서 부를때 넣어야함(중복안되게 하기 위함)
#include <iostream>
#include <string>
using namespace std;

class Bus {
	int busNumber;  //버스 번호
	int money;      //수입

public:
	Bus(int busNumber = 0, int money = 0); //생산자
	//선언할때 초기화하고 구현할땐 변수이름만 저장한다.
	void take(int fee);  //요금을 받고 사람을 태움
	void showInfo();
};

class Subway {
	int subwayNumber;
	int money;

public:
	Subway(int subwayNumber = 0, int money = 0);
	void take(int fee);
	void showInfo();
};