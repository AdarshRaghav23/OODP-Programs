#include <iostream>
using namespace std;

// Class definition
class BankAccount
{
private:
    int accountNumber;
    float balance;

public:
    // Parameterized constructor to initialize data members
    BankAccount(int accNo, float bal)
    {
        accountNumber = accNo;
        balance = bal;
    }

    // Member function to display account details
    void displayDetails()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : " << balance << endl;
    }
};

// Main function
int main()
{
    int accNo;
    float initialDeposit;

    // Taking input from user
    cout << "Enter Account Number : ";
    cin >> accNo;

    cout << "Enter Initial Deposit : ";
    cin >> initialDeposit;

    // Creating object and passing values to constructor
    BankAccount customer(accNo, initialDeposit);

    // Displaying account details
    customer.displayDetails();

    return 0;
}
