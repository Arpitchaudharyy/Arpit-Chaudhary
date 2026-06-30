// Write a program to Develop complete mini project using arrays, strings and functions
// Ticket booking system 


#include <iostream>
#include <string>
using namespace std;

struct Ticket
{
    int ticketNo;
    string name;
    string destination;
    int seats;
    bool booked;
};

void bookTicket(Ticket &t)
{
    cout << "Enter Ticket Number: ";
    cin >> t.ticketNo;
    cin.ignore();

    cout << "Enter Passenger Name: ";
    getline(cin, t.name);

    cout << "Enter Destination: ";
    getline(cin, t.destination);

    cout << "Enter Number of Seats: ";
    cin >> t.seats;

    t.booked = true;

    cout << "\nTicket Booked Successfully!\n";
}

void cancelTicket(Ticket &t)
{
    if (t.booked)
    {
        t.booked = false;
        cout << "Ticket Cancelled Successfully!\n";
    }
    else
    {
        cout << "No Ticket is Booked.\n";
    }
}

void displayTicket(Ticket t)
{
    if (!t.booked)
    {
        cout << "No Ticket Booking Found.\n";
        return;
    }

    cout << "\n----- Ticket Details -----\n";
    cout << "Ticket Number : " << t.ticketNo << endl;
    cout << "Passenger Name: " << t.name << endl;
    cout << "Destination   : " << t.destination << endl;
    cout << "Seats         : " << t.seats << endl;
}

int main()
{
    Ticket t;
    t.booked = false;

    int choice;

    do
    {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Display Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            bookTicket(t);
            break;

        case 2:
            cancelTicket(t);
            break;

        case 3:
            displayTicket(t);
            break;

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}