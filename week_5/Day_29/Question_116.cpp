// Write a program to Create inventory management system.
#include<iostream>
using namespace std;

struct Item
{
    int id;
    string name;
    int quantity;
    float price;
};

void addItem(Item it[], int &count)
{
    cout << "Enter Item ID = ";
    cin >> it[count].id;

    cout << "Enter Item Name = ";
    cin >> it[count].name;

    cout << "Enter Quantity = ";
    cin >> it[count].quantity;

    cout << "Enter Price = ";
    cin >> it[count].price;

    count++;

    cout << "Item added successfully.\n";
}

void display(Item it[], int &count)
{
    if(count == 0)
    {
        cout << "No items in inventory.\n";
        return;
    }

    for(int i = 0; i < count; i++)
    {
        cout << "\nItem " << i + 1 << endl;
        cout << "ID = " << it[i].id << endl;
        cout << "Name = " << it[i].name << endl;
        cout << "Quantity = " << it[i].quantity << endl;
        cout << "Price = " << it[i].price << endl;
    }
}

void search(Item it[], int &count)
{
    int id;
    cout << "Enter ID to search = ";
    cin >> id;

    for(int i = 0; i < count; i++)
    {
        if(it[i].id == id)
        {
            cout << "Item Found!\n";
            cout << "Name = " << it[i].name << endl;
            cout << "Quantity = " << it[i].quantity << endl;
            cout << "Price = " << it[i].price << endl;
            return;
        }
    }

    cout << "Item not found.\n";
}

void update(Item it[], int &count)
{
    int id;
    cout << "Enter ID to update = ";
    cin >> id;

    for(int i = 0; i < count; i++)
    {
        if(it[i].id == id)
        {
            cout << "Enter new name = ";
            cin >> it[i].name;

            cout << "Enter new quantity = ";
            cin >> it[i].quantity;

            cout << "Enter new price = ";
            cin >> it[i].price;

            cout << "Item updated successfully.\n";
            return;
        }
    }

    cout << "Item not found.\n";
}

void del(Item it[], int &count)
{
    int id;
    cout << "Enter ID to delete = ";
    cin >> id;

    for(int i = 0; i < count; i++)
    {
        if(it[i].id == id)
        {
            for(int j = i; j < count - 1; j++)
            {
                it[j] = it[j + 1];
            }

            count--;

            cout << "Item deleted successfully.\n";
            return;
        }
    }

    cout << "Item not found.\n";
}

void stockCheck(Item it[], int &count)
{
    int id;
    cout << "Enter ID = ";
    cin >> id;

    for(int i = 0; i < count; i++)
    {
        if(it[i].id == id)
        {
            if(it[i].quantity > 0)
                cout << "In Stock\n";
            else
                cout << "Out of Stock\n";

            return;
        }
    }

    cout << "Item not found.\n";
}

void totalValue(Item it[], int &count)
{
    float total = 0;

    for(int i = 0; i < count; i++)
    {
        total += it[i].quantity * it[i].price;
    }

    cout << "Total Inventory Value = " << total << endl;
}

void highestPrice(Item it[], int &count)
{
    int idx = 0;

    for(int i = 1; i < count; i++)
    {
        if(it[i].price > it[idx].price)
            idx = i;
    }

    cout << "Highest Price Item = " << it[idx].name << endl;
    cout << "Price = " << it[idx].price << endl;
}

void lowestPrice(Item it[], int &count)
{
    int idx = 0;

    for(int i = 1; i < count; i++)
    {
        if(it[i].price < it[idx].price)
            idx = i;
    }

    cout << "Lowest Price Item = " << it[idx].name << endl;
    cout << "Price = " << it[idx].price << endl;
}

int main()
{
    Item it[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Item\n";
        cout << "5. Delete Item\n";
        cout << "6. Stock Check\n";
        cout << "7. Total Inventory Value\n";
        cout << "8. Highest Price Item\n";
        cout << "9. Lowest Price Item\n";
        cout << "10. Exit\n";

        cout << "Enter choice = ";
        cin >> choice;

        switch(choice)
        {
            case 1 :
            {
                addItem(it, count);
                break;
            }

            case 2 :
            {
                display(it, count);
                break;
            }

            case 3 :
            {
                search(it, count);
                break;
            }

            case 4 :
            {
                update(it, count);
                break;
            }

            case 5 :
            {
                del(it, count);
                break;
            }

            case 6 :
            {
                stockCheck(it, count);
                break;
            }

            case 7 :
            {
                totalValue(it, count);
                break;
            }

            case 8 :
            {
                highestPrice(it, count);
                break;
            }

            case 9 :
            {
                lowestPrice(it, count);
                break;
            }

            case 10 :
            {
                cout << "Thank You!\n";
                break;
            }

            default :
            {
                cout << "Invalid Choice!\n";
            }
        }

    } while(choice != 10);

    return 0;
}