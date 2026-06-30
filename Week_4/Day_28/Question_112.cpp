#include <iostream>
#include <string>
using namespace std;

struct Contact
{
    string name;
    string phone;
    string email;
};

void addContact(Contact contacts[], int &count)
{
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, contacts[count].name);

    cout << "Enter Phone Number: ";
    getline(cin, contacts[count].phone);

    cout << "Enter Email: ";
    getline(cin, contacts[count].email);

    count++;
    cout << "\nContact Added Successfully!\n";
}

void searchContact(Contact contacts[], int count)
{
    string name;
    cout << "Enter Name to Search: ";
    cin.ignore();
    getline(cin, name);

    for (int i = 0; i < count; i++)
    {
        if (contacts[i].name == name)
        {
            cout << "\nContact Found\n";
            cout << "Name  : " << contacts[i].name << endl;
            cout << "Phone : " << contacts[i].phone << endl;
            cout << "Email : " << contacts[i].email << endl;
            return;
        }
    }

    cout << "Contact Not Found!\n";
}

void displayContacts(Contact contacts[], int count)
{
    if (count == 0)
    {
        cout << "No Contacts Available.\n";
        return;
    }

    cout << "\n----- Contact List -----\n";
    for (int i = 0; i < count; i++)
    {
        cout << "\nContact " << i + 1 << endl;
        cout << "Name  : " << contacts[i].name << endl;
        cout << "Phone : " << contacts[i].phone << endl;
        cout << "Email : " << contacts[i].email << endl;
    }
}

void deleteContact(Contact contacts[], int &count)
{
    string name;
    cout << "Enter Name to Delete: ";
    cin.ignore();
    getline(cin, name);

    for (int i = 0; i < count; i++)
    {
        if (contacts[i].name == name)
        {
            for (int j = i; j < count - 1; j++)
            {
                contacts[j] = contacts[j + 1];
            }
            count--;
            cout << "Contact Deleted Successfully!\n";
            return;
        }
    }

    cout << "Contact Not Found!\n";
}

int main()
{
    Contact contacts[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Search Contact\n";
        cout << "3. Display All Contacts\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addContact(contacts, count);
            break;

        case 2:
            searchContact(contacts, count);
            break;

        case 3:
            displayContacts(contacts, count);
            break;

        case 4:
            deleteContact(contacts, count);
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