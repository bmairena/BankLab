#include <iostream>
#include "Bank.h"
using namespace std;

Bank bank = Bank("Awesome Bank");

void displayMenu();
void transactionMenu();
void addAccountMenu();

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
		cout << "What would you like to do?  " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: addAccountMenu();  break;
		case 2: transactionMenu(); break;
		default: break;
		}

	} while (choice != 10);
	
}
void addAccountMenu()
{
	system("cls");
	cout << "Customer first name: ";
	string firstName;
	cin >> firstName;

	cout << "Customer last name: ";
	string lastName;
	cin >> lastName;

	cout << "Account Number: ";
	int accountNumber;
	cin >> accountNumber;

	Customer customer = Customer(firstName, lastName);
	Account newAccount = Account(customer, accountNumber);
	bank.createAccount(newAccount);
}


void transactionMenu()
{

}


