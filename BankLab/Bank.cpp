#include "Bank.h"

Bank::Bank(std::string name) : _name(name)
{
	//comment
}

Bank::~Bank()
{
}

std::string Bank::getName()
{
	return _name;
}

void Bank::createAccount(Account newAccount)
{
	_accounts.push_back(newAccount);
}

std::string Bank::showAccounts()
{
	
		std::string output = "Accounts for " + _name + "\n";
		for (auto account : _accounts)
		{
			output += std::to_string(account.getAccountNumber()) += "\n";
		}
		return output;
}

std::string Bank::listAccount()
{
	std::string output = "Accounts for " + _name + "\n";
	int index = 0;
	for (auto account : _accounts)
	{
		output += std:: to_string(index) + ") " += std::to_string(account.getAccountNumber()) += "\n";
		index++;
	}
	return output;
}

void Bank::Deposit(int accountNumber, int amount)
{
	for (Account account : _accounts){
		if (account.getAccountNumber() == accountNumber) {
			account.Deposit(amount);
		}
}

}

void Bank::Withdraw(int accountNumber, int amount)
{
	for (Account account : _accounts) {
		if (account.getAccountNumber() == accountNumber) {
			account.Withdraw(amount);
		}
	}
}
