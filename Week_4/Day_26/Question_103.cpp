// Write a program to Create ATM simulation
#include<iostream>
using namespace std;
int main ()
{
    int pin , choice;
    int crpin = 1428;
    int bal = 192293;
    for (int i = 0; i < 3; i++)
    {
        cout << "enter your 4 digit pin = ";
        cin >> pin;
        if(pin != crpin )
        {
           cout << "pin is incorrect\n";
        }
        else {
         break;
        }
        if ( i == 2)
        {
            cout << "maximum attempt of pin is reached please try 24 hour later \n";
            return 0;
        }
    }
    cout << "1. check balance\n";
    cout << "2. deposit money\n";
    cout << "3. withdraw money\n";
    cout << "4. exit\n";
    cout <<" enter your choice\n";
    cin >> choice;
    switch (choice) 
   { 
    case 1:
    {
        cout << "your balance is = ₹"<< bal << endl;
        break;
    }
    case 2:    
    {
        int depo;
        cout << "\nEnter amount to deposit: ₹";
        cin >> depo;

        if (depo <= 0)
        {
            cout << "Invalid amount. Deposit must be positive.\n";
        }
        else
        {
            bal += depo;
            cout << "Deposit successful! New balance: ₹" << bal<< "\n";
        }
        break;
     }
     case 3:
     {
        int withdraw;
        cout << "enter the money you wanna withdraw =  ₹";
        cin >> withdraw;
        bal -=withdraw;
        cout << "Withdrawl  successful! New balance: $" << bal<< "\n";
        break;
     }
     case 4:
     {
        cout << " thankyou for visting out ATM\n";
        break;
     }
     default:
     {
        cout << " enter a valid option from 1/2/3/4";
        break;
     }

    }while (choice !=4)
    return 0;


}
