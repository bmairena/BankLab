#include "Account.h"

Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{
}

Account::~Account()
{
}


bool Account::Deposit(int pennies)
{
	if (pennies > 0)
	{
		_transactionLog->push(_accountOwner.getFullName() + " deposited " + std::to_string(pennies));
		_balanceInPennies += pennies;
		return true;
	}
	return false;
}

bool Account::Withdraw(int pennies)
{
	if (pennies > 0) {
		_balanceInPennies -= pennies;
		_transactionLog->push(_accountOwner.getFullName() + " withdrew " + std::to_string(pennies));
		return true;
	}
	return false;
}
int Account::getBalance()
{
	return _balanceInPennies;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}


std::string Account::showTransactionLog()
{
	std::string output = "Transaction Log";
	while (!_transactionLog->empty()) {
		output += _transactionLog->front();
		_transactionLog->pop();
	}
	return output;
}
std::string Account::GetAccountInfo()
{
	return _accountOwner.getFullName();
}