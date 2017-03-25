#pragma once
#include<vector>
#include<string>
#include "Account.h"
class Bank
{
private:
	std::string _name;
	std::vector<Account> _accounts;

public:
	Bank(std::string name);
	~Bank();

	std::string getName();
	std::string showAccounts();
	std::vector<Account> GetAccounts();
	bool OpenAccount(Account account, int startingPennies);
	
}; 

