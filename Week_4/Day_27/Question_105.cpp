// Write a program to Create student record management system.
#include<iostream>
using namespace std;
 typedef struct student
{
    string name ;
    float cgpa ;
    int roll;
    string gender ;
}st;

int main ()
{
    int choice, count = 0;
    student students[100];

students[count].name = "aman";
students[count].cgpa = 8.3;
students[count].roll = 12;
students[count].gender = "male";
count ++;


students[count].name = "mohit";
students[count].cgpa = 8.2;
students[count].roll = 23;
students[count].gender = "male";
count ++;


students[count].name = "anjali";
students[count].cgpa = 4.7;
students[count].roll = 54;
students[count].gender = "female";
count ++;


students[count].name = "vikas";
students[count].cgpa = 8.3;
students[count].roll = 30;
students[count].gender = "male";
count ++;

students[count].name = "Sonam";
students[count].cgpa = 8.0;
students[count].roll = 34;
students[count].gender = "female";
count ++;

cout << "1. search a student \n";
cout << "2. add a new student record\n";
cout << "3. print the data of all students\n";
cout << "4. Changes the details of an exisiting student\n";
cout << "5. remove the existing student\n";
cout << "\nenter your choise /1/2/3/4/5\n";
cin >> choice ;
switch (choice)
    {
    case 1:
        {
            string nm;
            cout << " Enter the name of the student\n";
            cin >> nm;
            for (int i = 0; i < count; i++)
            {
               if(nm == students[i].name)
               {
                cout << "student name is = "<< students[i].name << endl;
                cout << "student cgpa is = "<< students[i].cgpa << endl;
                cout << "student roll number is = "<< students[i].roll << endl;
                cout << "student gender is = "<< students[i].gender << endl;
                

               }
                
            }
            cout << "There is no student with such name \n";
            break;
        }

    case 2:
        {
             cout<< "enter the name of the student = ";
             cin >> students[count].name;
             cout << "\n enter the cgpa of the student = ";
             cin >> students[count].cgpa;
             cout <<"\n enter the roll number of the student = ";
             cin >> students[count].roll;
             cout << "\n enter the gender  of the student = ";
             cin >> students[count].gender;
             cout << endl << "\n new student has been successfully added with the below details\n\n";
             cout << "student name is = "<< students[count].name << endl;
             cout << "student cgpa is = "<< students[count].cgpa << endl;
             cout << "student roll number is = "<< students[count].roll << endl;
             cout << "student gender is = "<<students[count].gender << endl;
             count++;
             


    
            break;
        }
    case 3:
        {
            for (int i = 0; i < count; i++)
            {
                cout << "student number = "<< i+1<<endl;
                cout << "student name is = "<< students[i].name << endl;
                cout << "student cgpa is = "<< students[i].cgpa << endl;
                cout << "student roll number is = "<< students[i].roll << endl;
                cout << "student gender is = "<<students[i].gender << endl;
                cout<< "---------------------------------------------------------\n";
            }
            
    
            break;
        }
    case 4:
        {
            int roll ;
            cout<< "enter the roll number of the student you wanna edit = ";
            cin >> roll;
            for (int i = 0; i < count; i++)
            {
                if (roll == students[i].roll)
                {
                    int select;
                    cout << "1.  change name\n";
                    cout << "2. change cgpa \n";
                    cout << "3. change roll number\n";
                    cout << "4. change gender\n";
                    cout << "5. change all \n";
                    cout << "\nselect what you wanna change from 1/2/3/4/5\n";
                    cin >> select;
                    switch (select)
                    {
                    case 1:
                    {
                        cout<< "enter  the new name of the student = ";
                        cin >> students[i].name;
                        break;
                    }
                    case 2:
                    {
                        cout<< "enter  the new cgpa of the student = ";
                        cin >> students[i].cgpa;
                        break;
                    }
                    case 3 :
                    {
                        cout<< "enter  the new roll number of the student = ";
                        cin >> students[i].roll;
                        break;
                    }
                    case 4:
                    {
                        cout<< "enter  the new gender of the student = ";
                        cin >> students[i].gender;
                        break;
                    }case 5:
                    {
                        cout<< "enter  the new name of the student = ";
                        cin >> students[i].name;
                        cout<< "\nenter  the new cgpa of the student = ";
                        cin >> students[i].cgpa;
                        cout<< "\nenter  the new roll number of the student = ";
                        cin >> students[i].roll;
                        cout<< "\nenter  the new gender of the student = ";
                        cin >> students[i].gender;
                        break;
                    }
                    default:
                    {
                        cout << "enter the valid option from 1/2/3/4/5\n";
                        break;

                    }
                        
                    }
                    cout << "student name is = "<< students[i].name << endl;
                    cout << "student cgpa is = "<< students[i].cgpa << endl;
                    cout << "student roll number is = "<< students[i].roll << endl;
                    cout << "student gender is = "<<students[i].gender << endl;

                }
                
            }
            
    
            break;
        }
    case 5:
        { int roll;
            cout << "enter thr roll number of the student you wanna remove = ";
            cin >> roll;
            for (int i = 0; i < count; i++)
            {
                if ( roll == students[i].roll)
                {
                    for (int j = i; j <= count; j++)
                    {
                        students[j] = students[j+1];
                    }
                    count --;
                    
                }
            }
            cout <<"\nstudent have been removed successfully\n";
             
    
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


