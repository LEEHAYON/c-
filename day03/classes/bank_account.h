#include <iostream>
using namespace std;

class BankAccount{
	string ano;    //���� ��ȣ
	string owner;  //������
	int balance;   //�ܰ�

public:
	BankAccount(string ano = "unnamed", string owner="unnamed", int balance=0);
	~BankAccount();  //�Ҹ���

	void setAno(string ano);
	string getAno();
	void setOwner(string owner);
	string getOwner();
	void setBalance(int balance);
	int getBalance();
};