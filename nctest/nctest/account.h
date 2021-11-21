#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string ano;
	string owner;
	int balance;

public:
	void setAno(string ano);
	string getAno();
	void setOwner(string owner);
	string gerOwner();
	void setBalance(int balance);
	int getBalance();
};