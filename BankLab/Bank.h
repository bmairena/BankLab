#pragma once
#include<vector>
#include<string>
#include "Account.h"
//changes
class Bank
{
private:
	std::string _name;
	std::vector<Account> _accounts;

public:
	Bank(std::string name);
	~Bank();

	std::string getName();
	void createAccount(Account newAccount);
	std::string showAccounts();
	
	std::string listAccount();
	void Deposit(int accountNumber, int amount);
	void Withdraw(int accountNumber, int amount);
};

