// Write a program to Create salary management system.
#include<iostream>
#include<string>
using namespace std;

struct employee
{
    string name;
    int id;
    float basicsalary;
    float bonus;
    float deduction;
};

void search(employee emp[], int id, int &count)
{
    for(int i=0;i<count;i++)
    {
        if(id==emp[i].id)
        {
            float totalsalary = emp[i].basicsalary + emp[i].bonus - emp[i].deduction;

            cout<<"employee name is = "<<emp[i].name<<endl;
            cout<<"employee id is = "<<emp[i].id<<endl;
            cout<<"basic salary is = "<<emp[i].basicsalary<<endl;
            cout<<"bonus is = "<<emp[i].bonus<<endl;
            cout<<"deduction is = "<<emp[i].deduction<<endl;
            cout<<"total salary is = "<<totalsalary<<endl;
            return;
        }
    }

    cout<<"There is no employee with such id\n";
    return;
}

void addemp(employee emp[], int &count)
{
    cout<<"enter the name of the employee = ";
    cin>>emp[count].name;

    cout<<"\nenter the id of the employee = ";
    cin>>emp[count].id;

    cout<<"\nenter the basic salary = ";
    cin>>emp[count].basicsalary;

    cout<<"\nenter the bonus = ";
    cin>>emp[count].bonus;

    cout<<"\nenter the deduction = ";
    cin>>emp[count].deduction;

    float totalsalary = emp[count].basicsalary + emp[count].bonus - emp[count].deduction;

    cout<<"\nnew employee record has been successfully added\n\n";
    cout<<"employee name is = "<<emp[count].name<<endl;
    cout<<"employee id is = "<<emp[count].id<<endl;
    cout<<"basic salary is = "<<emp[count].basicsalary<<endl;
    cout<<"bonus is = "<<emp[count].bonus<<endl;
    cout<<"deduction is = "<<emp[count].deduction<<endl;
    cout<<"total salary is = "<<totalsalary<<endl;

    count++;
    return;
}

void alldata(employee emp[], int &count)
{
    for(int i=0;i<count;i++)
    {
        float totalsalary = emp[i].basicsalary + emp[i].bonus - emp[i].deduction;

        cout<<"employee number = "<<i+1<<endl;
        cout<<"employee name is = "<<emp[i].name<<endl;
        cout<<"employee id is = "<<emp[i].id<<endl;
        cout<<"basic salary is = "<<emp[i].basicsalary<<endl;
        cout<<"bonus is = "<<emp[i].bonus<<endl;
        cout<<"deduction is = "<<emp[i].deduction<<endl;
        cout<<"total salary is = "<<totalsalary<<endl;
        cout<<"---------------------------------------------------------\n";
    }

    return;
}

void edit(employee emp[], int &count)
{
    int id;

    cout<<"enter the id of the employee you wanna edit = ";
    cin>>id;

    for(int i=0;i<count;i++)
    {
        if(id==emp[i].id)
        {
            int select;

            cout<<"1. change name\n";
            cout<<"2. change id\n";
            cout<<"3. change basic salary\n";
            cout<<"4. change bonus\n";
            cout<<"5. change deduction\n";
            cout<<"6. change all\n";

            cout<<"\nselect what you wanna change\n";
            cin>>select;

            switch(select)
            {
                case 1:
                {
                    cout<<"enter the new name = ";
                    cin>>emp[i].name;
                    break;
                }

                case 2:
                {
                    cout<<"enter the new id = ";
                    cin>>emp[i].id;
                    break;
                }

                case 3:
                {
                    cout<<"enter the new basic salary = ";
                    cin>>emp[i].basicsalary;
                    break;
                }

                case 4:
                {
                    cout<<"enter the new bonus = ";
                    cin>>emp[i].bonus;
                    break;
                }

                case 5:
                {
                    cout<<"enter the new deduction = ";
                    cin>>emp[i].deduction;
                    break;
                }

                case 6:
                {
                    cout<<"enter the new name = ";
                    cin>>emp[i].name;

                    cout<<"\nenter the new id = ";
                    cin>>emp[i].id;

                    cout<<"\nenter the new basic salary = ";
                    cin>>emp[i].basicsalary;

                    cout<<"\nenter the new bonus = ";
                    cin>>emp[i].bonus;

                    cout<<"\nenter the new deduction = ";
                    cin>>emp[i].deduction;

                    break;
                }

                default:
                {
                    cout<<"enter the valid option\n";
                    break;
                }
            }

            float totalsalary = emp[i].basicsalary + emp[i].bonus - emp[i].deduction;

            cout<<"employee name is = "<<emp[i].name<<endl;
            cout<<"employee id is = "<<emp[i].id<<endl;
            cout<<"basic salary is = "<<emp[i].basicsalary<<endl;
            cout<<"bonus is = "<<emp[i].bonus<<endl;
            cout<<"deduction is = "<<emp[i].deduction<<endl;
            cout<<"total salary is = "<<totalsalary<<endl;
        }
    }

    return;
}

void deltemp(employee emp[], int &count)
{
    int id;

    cout<<"enter the id of the employee you wanna remove = ";
    cin>>id;

    for(int i=0;i<count;i++)
    {
        if(id==emp[i].id)
        {
            for(int j=i;j<count-1;j++)
            {
                emp[j]=emp[j+1];
            }

            count--;
        }
    }

    cout<<"\nemployee has been removed successfully\n";
    return;
}

int main()
{
    int choice,id,count=0;

    employee emp[100];

    emp[count].name="aman";
    emp[count].id=100;
    emp[count].basicsalary=30000;
    emp[count].bonus=5000;
    emp[count].deduction=1000;
    count++;

    emp[count].name="mohit";
    emp[count].id=101;
    emp[count].basicsalary=35000;
    emp[count].bonus=4000;
    emp[count].deduction=1500;
    count++;

    emp[count].name="anjali";
    emp[count].id=102;
    emp[count].basicsalary=40000;
    emp[count].bonus=6000;
    emp[count].deduction=2000;
    count++;

    emp[count].name="vikas";
    emp[count].id=103;
    emp[count].basicsalary=32000;
    emp[count].bonus=3500;
    emp[count].deduction=1200;
    count++;

    emp[count].name="sonam";
    emp[count].id=104;
    emp[count].basicsalary=45000;
    emp[count].bonus=7000;
    emp[count].deduction=2500;
    count++;

    cout<<"1. search an employee salary\n";
    cout<<"2. add a new employee salary record\n";
    cout<<"3. print all employee salary records\n";
    cout<<"4. change employee salary details\n";
    cout<<"5. remove employee salary record\n";

    cout<<"\nenter your choice\n";
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            cout<<"enter the id of the employee = ";
            cin>>id;
            search(emp,id,count);
            break;
        }

        case 2:
        {
            addemp(emp,count);
            break;
        }

        case 3:
        {
            alldata(emp,count);
            break;
        }

        case 4:
        {
            edit(emp,count);
            break;
        }

        case 5:
        {
            deltemp(emp,count);
            break;
        }

        default:
        {
            cout<<"enter the valid option\n";
            break;
        }
    }

    return 0;
}