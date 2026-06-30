// Write a program to Create mini employee management system.
#include<iostream>
#include<string>
using namespace std;

struct employee
{
    string name ;
    int id;
    int age;
    string gender;
};
void search(employee emp[], int id, int &count )
{
            for (int i = 0; i < count; i++)
            {
               if(id == emp[i].id)
               {
                cout << "employee name is = "<< emp[i].name << endl;
                cout << "employee id is = "<< emp[i].id << endl;
                cout << "employee age  number is = "<< emp[i].age << endl;
                cout << "employee gender is = "<< emp[i].gender << endl;
                return ;
                

               }
                
            }
            cout << "There is no employee with such id \n";
            return ;

}
void addemp (employee emp[] , int &count )
{
    cout<< "enter the name of the employee = ";
             cin >> emp[count].name;
             cout << "\n enter the id of the employee = ";
             cin >> emp[count].id;
             cout <<"\n enter the age of the employee = ";
             cin >> emp[count].age;
             cout << "\n enter the gender  of the employee = ";
             cin >> emp[count].gender;
             cout << endl << "\n new employee has been successfully added with the below details\n\n";
             cout << "employee name is = "<< emp[count].name << endl;
             cout << "employee id is = "<< emp[count].id << endl;
             cout << "employee age is = "<< emp[count].age << endl;
             cout << "employee gender is = "<<emp[count].gender << endl;
             count++;
             return;
}
void alldata(employee emp[], int &count)
{
    for (int i = 0; i < count; i++)
            {
                cout << "employee number = "<< i+1<<endl;
                cout << "employee name is = "<< emp[i].name << endl;
                cout << "employee id is = "<< emp[i].id << endl;
                cout << "employee age is = "<< emp[i].age << endl;
                cout << "employee gender is = "<<emp[i].gender << endl;
                cout<< "---------------------------------------------------------\n";
            }
            return ;
}
void edit(employee emp[], int &count)
{
    int id ;
            cout<< "enter the id of the employee you wanna edit = ";
            cin >> id;
            for (int i = 0; i < count; i++)
            {
                if (id == emp[i].id)
                {
                    int select;
                    cout << "1.  change name\n";
                    cout << "2. change id \n";
                    cout << "3. change age\n";
                    cout << "4. change gender\n";
                    cout << "5. change all \n";
                    cout << "\nselect what you wanna change from 1/2/3/4/5\n";
                    cin >> select;
                    switch (select)
                    {
                    case 1:
                    {
                        cout<< "enter  the new name of the employee = ";
                        cin >> emp[i].name;
                        break;
                    }
                    case 2:
                    {
                        cout<< "enter  the new id of the employee = ";
                        cin >> emp[i].id;
                        break;
                    }
                    case 3 :
                    {
                        cout<< "enter  the new age of the employee = ";
                        cin >> emp[i].age;
                        break;
                    }
                    case 4:
                    {
                        cout<< "enter  the new gender of the employee = ";
                        cin >> emp[i].gender;
                        break;
                    }case 5:
                    {
                        cout<< "enter  the new name of the employee = ";
                        cin >> emp[i].name;
                        cout<< "\nenter  the new id of the employee = ";
                        cin >> emp[i].id;
                        cout<< "\nenter  the new age of the employee = ";
                        cin >> emp[i].age;
                        cout<< "\nenter  the new gender of the employee = ";
                        cin >> emp[i].gender;
                        break;
                    }
                    default:
                    {
                        cout << "enter the valid option from 1/2/3/4/5\n";
                        break;

                    }
                        
                    }
                    cout << "employee name is = "<< emp[i].name << endl;
                    cout << "employee id is = "<< emp[i].id << endl;
                    cout << "employee age is = "<< emp[i].age << endl;
                    cout << "employee gender is = "<<emp[i].gender << endl;

                }
                
            }
            return ;
}

void deltemp (employee emp[] , int &count)
{
    int id;
            cout << "enter thr id of the employee you wanna remove = ";
            cin >> id;
            for (int i = 0; i < count; i++)
            {
                if ( id == emp[i].id)
                {
                    for (int j = i; j < count -1; j++)
                    {
                        emp[j] = emp[j+1];
                    }
                    count --;
                    
                }
            }
            cout <<"\nemployee have been removed successfully\n";
             return ;
    
        
}
int main ()
{
   

   int choice, id , count = 0;
    employee emp[100];

emp[count].name = "aman";
emp[count].id = 100;
emp[count].age = 21;
emp[count].gender = "male";
count ++;


emp[count].name = "mohit";
emp[count].id = 101;
emp[count].age = 23;
emp[count].gender = "male";
count ++;


emp[count].name = "anjali";
emp[count].id = 102;
emp[count].age = 54;
emp[count].gender = "female";
count ++;


emp[count].name = "vikas";
emp[count].id = 103;
emp[count].age = 30;
emp[count].gender = "male";
count ++;

emp[count].name = "Sonam";
emp[count].id = 104;
emp[count].age = 34;
emp[count].gender = "female";
count ++;

do {
cout << "1. search a employee \n";
cout << "2. add a new employee record\n";
cout << "3. print the data of all employee\n";
cout << "4. Changes the details of an exisiting employee\n";
cout << "5. remove the existing employee\n";
cout << "6. Exit\n";
cout << "\nenter your choise /1/2/3/4/5/6\n";
cin >> choice ;
switch (choice)
{
case 1 :
{
    cout << "Enter the id of the employee you wanna search = ";
    cin >> id ;
    search ( emp , id , count);
    break;
}
case 2 :
{
    addemp ( emp,count );
    break;
    
}
case 3 :
{
    alldata(emp ,count);
    break;

}
case 4 :
{
    edit(emp , count);
    break;
}
case 5 :
{
    deltemp( emp , count);
    break;
}
case 6 :
{
    cout << "thank you\n";
    break;
}
default:
        {
            cout << "enter the valid option from 1/2/3/4/5/6\n";
            break;
        }
}
}while (choice != 6);           

return 0;
}
