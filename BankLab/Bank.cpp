#include "Bank.h"
#include <iostream>

Bank::Bank(std::string name) : _name(name)
{

}

Bank::~Bank()
{
}

std::string Bank::getName()
{
	return _name;
}

std::string Bank::showAccounts()
{
	std::string output = "Accounts for " + _name;
	for (auto account : _accounts)
	{
		output += std::to_string(account.getAccountNumber()) += "\n";
	}
	return output;
}


std::vector<Account> Bank::GetAccounts()
{
	return _accounts;
}



bool Bank::OpenAccount(Account account, int startingPennies)
{
	account.Deposit(startingPennies);
	_accounts.push_back(account);
	return true;
}