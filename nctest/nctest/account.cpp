#include "account.h"

void Account::setAno(string ano) { this->ano = ano; }
string Account::getAno() { return ano; }
void Account::setOwner(string owner) { this->owner = owner; }
string Account::gerOwner() { return owner; }
void Account::setBalance(int balance) { this->balance = balance; }
int Account::getBalance() { return balance; }