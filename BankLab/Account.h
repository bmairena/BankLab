#pragma once
#include "Customer.h"
#include <queue>
class Account
{
private:
	int _accountNumber;
	int _balanceInPennies = 0;	 
	Customer _accountOwner;
	std::queue<std::string> *_transactionLog = new std::queue<std::string>();

public:
	Account(Customer customer, int accountNumber);
	~Account();

	
	bool Account::Deposit(int pennies);
	bool Account::Withdraw(int pennies);
	int getBalance();
	int getAccountNumber();
	
	std::string showTransactionLog();
	std::string GetAccountInfo();
};

