// Write a program to Create library management system.
#include<iostream>
#include<string>
using namespace std;

struct book
{
    string title ;
    int id;
    string author;
    int quantity;
};
void search(book bk[], int id, int &count )
{
            for (int i = 0; i < count; i++)
            {
               if(id == bk[i].id)
               {
                cout << "book title is = "<< bk[i].title << endl;
                cout << "book id is = "<< bk[i].id << endl;
                cout << "book author is = "<< bk[i].author << endl;
                cout << "book quantity is = "<< bk[i].quantity << endl;
                return ;
                

               }
                
            }
            cout << "There is no book with such id \n";
            return ;

}
void addbook (book bk[] , int &count )
{
    cout<< "enter the title of the book = ";
             cin >> bk[count].title;
             cout << "\n enter the id of the book = ";
             cin >> bk[count].id;
             cout <<"\n enter the author of the book = ";
             cin >> bk[count].author;
             cout << "\n enter the quantity  of the book = ";
             cin >> bk[count].quantity;
             cout << endl << "\n new book has been successfully added with the below details\n\n";
             cout << "book title is = "<< bk[count].title << endl;
             cout << "book id is = "<< bk[count].id << endl;
             cout << "book author is = "<< bk[count].author << endl;
             cout << "book quantity is = "<<bk[count].quantity << endl;
             count++;
             return;
}
void alldata(book bk[], int &count)
{
    for (int i = 0; i < count; i++)
            {
                cout << "book number = "<< i+1<<endl;
                cout << "book title is = "<< bk[i].title << endl;
                cout << "book id is = "<< bk[i].id << endl;
                cout << "book author is = "<< bk[i].author << endl;
                cout << "book quantity is = "<<bk[i].quantity << endl;
                cout<< "---------------------------------------------------------\n";
            }
            return ;
}
void edit(book bk[], int &count)
{
    int id ;
            cout<< "enter the id of the book you wanna edit = ";
            cin >> id;
            for (int i = 0; i < count; i++)
            {
                if (id == bk[i].id)
                {
                    int select;
                    cout << "1.  change title\n";
                    cout << "2. change id \n";
                    cout << "3. change author\n";
                    cout << "4. change quantity\n";
                    cout << "5. change all \n";
                    cout << "\nselect what you wanna change from 1/2/3/4/5\n";
                    cin >> select;
                    switch (select)
                    {
                    case 1:
                    {
                        cout<< "enter  the new title of the book = ";
                        cin >> bk[i].title;
                        break;
                    }
                    case 2:
                    {
                        cout<< "enter  the new id of the book = ";
                        cin >> bk[i].id;
                        break;
                    }
                    case 3 :
                    {
                        cout<< "enter  the new author of the book = ";
                        cin >> bk[i].author;
                        break;
                    }
                    case 4:
                    {
                        cout<< "enter  the new quantity of the book = ";
                        cin >> bk[i].quantity;
                        break;
                    }case 5:
                    {
                        cout<< "enter  the new title of the book = ";
                        cin >> bk[i].title;
                        cout<< "\nenter  the new id of the book = ";
                        cin >> bk[i].id;
                        cout<< "\nenter  the new author of the book = ";
                        cin >> bk[i].author;
                        cout<< "\nenter  the new quantity of the book = ";
                        cin >> bk[i].quantity;
                        break;
                    }
                    default:
                    {
                        cout << "enter the valid option from 1/2/3/4/5\n";
                        break;

                    }
                        
                    }
                    cout << "book title is = "<< bk[i].title << endl;
                    cout << "book id is = "<< bk[i].id << endl;
                    cout << "book author is = "<< bk[i].author << endl;
                    cout << "book quantity is = "<<bk[i].quantity << endl;

                }
                
            }
            return ;
}

void delbook (book bk[] , int &count)
{
    int id;
            cout << "enter thr id of the book you wanna remove = ";
            cin >> id;
            for (int i = 0; i < count; i++)
            {
                if ( id == bk[i].id)
                {
                    for (int j = i; j < count -1; j++)
                    {
                        bk[j] = bk[j+1];
                    }
                    count --;
                    
                }
            }
            cout <<"\nbook have been removed successfully\n";
             return ;
    
        
}
int main ()
{
   

   int choice, id , count = 0;
    book bk[100];

bk[count].title = "Wings";
bk[count].id = 100;
bk[count].author = "Kalam";
bk[count].quantity = 5;
count ++;


bk[count].title = "Sapiens";
bk[count].id = 101;
bk[count].author = "Harari";
bk[count].quantity = 3;
count ++;


bk[count].title = "Clean";
bk[count].id = 102;
bk[count].author = "Martin";
bk[count].quantity = 7;
count ++;


bk[count].title = "Atomic";
bk[count].id = 103;
bk[count].author = "Clear";
bk[count].quantity = 4;
count ++;

bk[count].title = "Algos";
bk[count].id = 104;
bk[count].author = "Cormen";
bk[count].quantity = 2;
count ++;
cout << "1. search a book \n";
cout << "2. add a new book record\n";
cout << "3. print the data of all book\n";
cout << "4. Changes the details of an exisiting book\n";
cout << "5. remove the existing book\n";
cout << "\nenter your choise /1/2/3/4/5\n";
cin >> choice ;
switch (choice)
{
case 1 :
{
    cout << "Enter the id of the book you wanna search = ";
    cin >> id ;
    search ( bk , id , count);
    break;
}
case 2 :
{
    addbook ( bk,count );
    break;
    
}
case 3 :
{
    alldata(bk ,count);
    break;

}
case 4 :
{
    edit(bk , count);
    break;
}
case 5 :
{
    delbook( bk , count);
    break;
}
default:
        {
            cout << "enter the valid option from 1/2/3/4/5\n";
            break;
        }
}           

return 0;
}