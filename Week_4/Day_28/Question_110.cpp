#include <iostream>
#include <string>
using namespace std;

struct BankAccount
{
    int accNo;
    string name;
    double balance;
};

void createAccount(BankAccount &acc)
{
    cout << "Enter Account Number: ";
    cin >> acc.accNo;
    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, acc.name);

    cout << "Enter Initial Balance: ";
    cin >> acc.balance;

    cout << "\nAccount Created Successfully!\n";
}

void deposit(BankAccount &acc)
{
    double amount;
    cout << "Enter Amount to Deposit: ";
    cin >> amount;

    if (amount > 0)
    {
        acc.balance += amount;
        cout << "Deposit Successful!\n";
    }
    else
    {
        cout << "Invalid Amount!\n";
    }
}

void withdraw(BankAccount &acc)
{
    double amount;
    cout << "Enter Amount to Withdraw: ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid Amount!\n";
    }
    else if (amount > acc.balance)
    {
        cout << "Insufficient Balance!\n";
    }
    else
    {
        acc.balance -= amount;
        cout << "Withdrawal Successful!\n";
    }
}

void display(BankAccount acc)
{
    cout << "\n----- Account Details -----\n";
    cout << "Account Number : " << acc.accNo << endl;
    cout << "Account Holder : " << acc.name << endl;
    cout << "Balance         : " << acc.balance << endl;
}

int main()
{
    BankAccount acc;
    int choice;
    bool created = false;

    do
    {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createAccount(acc);
            created = true;
            break;

        case 2:
            if (created)
                deposit(acc);
            else
                cout << "Please create an account first.\n";
            break;

        case 3:
            if (created)
                withdraw(acc);
            else
                cout << "Please create an account first.\n";
            break;

        case 4:
            if (created)
                display(acc);
            else
                cout << "Please create an account first.\n";
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}