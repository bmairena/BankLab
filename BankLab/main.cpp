#include <iostream>
#include "Bank.h"
#include "Account.h"
using namespace std;

Bank bank = Bank("Awesome Bank");

void displayMenu();
void transactionMenu();
void addAccountMenu();
void displayAccountMenu();
void showTransactionLog();

int main()
{
	displayMenu();
	system("pause");

	return 0;
}

void displayMenu()
{
	int choice;
	do
	{
		system("cls");
		cout << "welcome to " << bank.getName() << endl;
		cout << "1) Add Account" << endl;
		cout << "2) Transaction" << endl;
		cout << "3) Display Account Numbers" << endl;
		cout << "4) Transaction Log" << endl;
		cout << "What would you like to do?  " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: addAccountMenu();  break;
		case 2: transactionMenu(); break;
		case 3: displayAccountMenu(); break;
		case 4: showTransactionLog(); break;
		default: break;
		}

	} while (choice != 10);
	
}
void addAccountMenu()
{

	system("cls");
	string firstName, lastName;
	cout << "Customer FirstName: ";
	cin >> firstName;
	cout << endl << "Customer LastName: ";
	cin >> lastName;
	auto customer = Customer(firstName, lastName);

	int accountNumber;
	cout << endl << "Account Number: ";
	cin >> accountNumber;

	auto account = Account(customer, accountNumber);
	bank.OpenAccount(account, 0);
}



void transactionMenu()
{

		system("cls");
		cout << "Which account?" << endl;
		int i = 0;
		for (auto account : bank.GetAccounts()) {
			i++;
			cout << i << ") " << account.GetAccountInfo() << endl;
		}
		int choice = 0;
		cin >> choice;

		auto account = bank.GetAccounts()[choice - 1];
		system("cls");

		cout << "1) Deposit" << endl;
		cout << "2) Withdraw" << endl;
		int typeChoice;
		cin >> typeChoice;

		cout << "How Many Pennies? ";
		int pennies;
		cin >> pennies;

		if (typeChoice == 1) {
			account.Deposit(pennies);
		}
		else if (typeChoice == 2) {
			account.Withdraw(pennies);
		}
		else {
			transactionMenu();
		}

		system("pause");
	}


void displayAccountMenu()
{
	system("cls");
	cout << bank.showAccounts();
	system("pause");
}


void showTransactionLog() {
	system("cls");
	cout << "Which account?" << endl;
	int i = 0;
	for (auto account : bank.GetAccounts()) {
		i++;
		cout << i << ") " << account.getBalance() << endl;
	}
	int choice = 0;
	cin >> choice;

	auto account = bank.GetAccounts()[choice - 1];
	system("cls");
	cout << account.showTransactionLog() << endl;
	system("pause");
}