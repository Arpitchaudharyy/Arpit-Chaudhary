	
// Write a program to Create menu-driven array operations system.
#include<iostream>
using namespace std;

void insert(int arr[], int &count)
{
    cout << "Enter element = ";
    cin >> arr[count];
    count++;
    cout << "Element inserted successfully.\n";
}

void display(int arr[], int &count)
{
    if(count == 0)
    {
        cout << "Array is empty.\n";
        return;
    }

    for(int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void search(int arr[], int &count)
{
    int key;
    cout << "Enter element to search = ";
    cin >> key;

    for(int i = 0; i < count; i++)
    {
        if(arr[i] == key)
        {
            cout << "Element found at position " << i + 1 << endl;
            return;
        }
    }

    cout << "Element not found.\n";
}

void update(int arr[], int &count)
{
    int oldValue, newValue;

    cout << "Enter element to update = ";
    cin >> oldValue;

    for(int i = 0; i < count; i++)
    {
        if(arr[i] == oldValue)
        {
            cout << "Enter new value = ";
            cin >> newValue;
            arr[i] = newValue;

            cout << "Updated successfully.\n";
            return;
        }
    }

    cout << "Element not found.\n";
}

void del(int arr[], int &count)
{
    int key;

    cout << "Enter element to delete = ";
    cin >> key;

    for(int i = 0; i < count; i++)
    {
        if(arr[i] == key)
        {
            for(int j = i; j < count - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            count--;
            cout << "Deleted successfully.\n";
            return;
        }
    }

    cout << "Element not found.\n";
}

void largest(int arr[], int &count)
{
    int max = arr[0];

    for(int i = 1; i < count; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Largest = " << max << endl;
}

void smallest(int arr[], int &count)
{
    int min = arr[0];

    for(int i = 1; i < count; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Smallest = " << min << endl;
}

void sumAvg(int arr[], int &count)
{
    int sum = 0;

    for(int i = 0; i < count; i++)
    {
        sum += arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Average = " << (float)sum / count << endl;
}

void sortArray(int arr[], int &count)
{
    for(int i = 0; i < count - 1; i++)
    {
        for(int j = i + 1; j < count; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted successfully.\n";
}

void reverseArray(int arr[], int &count)
{
    int start = 0, end = count - 1;

    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed successfully.\n";
}

int main()
{
    int arr[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== MENU DRIVEN ARRAY OPERATIONS =====\n";
        cout << "1. Insert\n";
        cout << "2. Display\n";
        cout << "3. Search\n";
        cout << "4. Update\n";
        cout << "5. Delete\n";
        cout << "6. Largest\n";
        cout << "7. Smallest\n";
        cout << "8. Sum & Average\n";
        cout << "9. Sort\n";
        cout << "10. Reverse\n";
        cout << "11. Exit\n";

        cout << "Enter choice = ";
        cin >> choice;

        switch(choice)
        {
            case 1 :
            {
                insert(arr, count);
                break;
            }

            case 2 :
            {
                display(arr, count);
                break;
            }

            case 3 :
            {
                search(arr, count);
                break;
            }

            case 4 :
            {
                update(arr, count);
                break;
            }

            case 5 :
            {
                del(arr, count);
                break;
            }

            case 6 :
            {
                largest(arr, count);
                break;
            }

            case 7 :
            {
                smallest(arr, count);
                break;
            }

            case 8 :
            {
                sumAvg(arr, count);
                break;
            }

            case 9 :
            {
                sortArray(arr, count);
                break;
            }

            case 10 :
            {
                reverseArray(arr, count);
                break;
            }

            case 11 :
            {
                cout << "Thank You!\n";
                break;
            }

            default :
            {
                cout << "Invalid choice!\n";
            }
        }

    } while(choice != 11);

    return 0;
}