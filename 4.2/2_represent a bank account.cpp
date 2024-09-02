// Define a class to represent a bank account. Include the following members:   
// 1. Data Member:   -Name of the depositor   -Account Number   -Type of Account   -Balance amount in the account 
// 2. Member Functions  
// To assign values  
// To deposited an amount   -To withdraw an amount after checking balance   -To display name balance
#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;

public:
   
    BankAccount(string name, string accNumber, string accType, double initialBalance)
        : depositorName(name), accountNumber(accNumber), accountType(accType), balance(initialBalance) {}

   
    void assignValues(string name, string accNumber, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    
    void deposit(double amount) 
	{
        if (amount > 0) 
		{
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

   
    void withdraw(double amount) 
	{
        if (amount > 0) 
		{
            if (amount <= balance) 
			{
                balance -= amount;
                cout << "Amount withdrawn: " << amount << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
        } else 
		{
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    
    void display() const 
	{
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() 
{
    
    BankAccount account("John Doe", "123456789", "Savings", 1000.00);

    
    cout << "Account Details:" << endl;
    account.display();
    cout << endl;

    
    account.deposit(500.00);
    cout << endl;

    
    account.withdraw(200.00);
    cout << endl;

    
    cout << "Updated Account Details:" << endl;
    account.display();

    return 0;
}
 

