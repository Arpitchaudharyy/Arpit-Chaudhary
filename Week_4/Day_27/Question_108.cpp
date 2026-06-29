// Write a program to Create marksheet generation system.
#include<iostream>
#include<string>
using namespace std;

struct student
{
    string name;
    int roll;
    int english;
    int maths;
    int science;
};

void search(student stu[], int roll, int &count)
{
    for(int i=0;i<count;i++)
    {
        if(roll==stu[i].roll)
        {
            int total = stu[i].english + stu[i].maths + stu[i].science;
            float percentage = total/3.0;

            cout<<"student name is = "<<stu[i].name<<endl;
            cout<<"student roll number is = "<<stu[i].roll<<endl;
            cout<<"english marks = "<<stu[i].english<<endl;
            cout<<"maths marks = "<<stu[i].maths<<endl;
            cout<<"science marks = "<<stu[i].science<<endl;
            cout<<"total marks = "<<total<<endl;
            cout<<"percentage = "<<percentage<<endl;
            return;
        }
    }

    cout<<"There is no student with such roll number\n";
    return;
}

void addstudent(student stu[], int &count)
{
    cout<<"enter the name of the student = ";
    cin>>stu[count].name;

    cout<<"\nenter the roll number = ";
    cin>>stu[count].roll;

    cout<<"\nenter english marks = ";
    cin>>stu[count].english;

    cout<<"\nenter maths marks = ";
    cin>>stu[count].maths;

    cout<<"\nenter science marks = ";
    cin>>stu[count].science;

    int total = stu[count].english + stu[count].maths + stu[count].science;
    float percentage = total/3.0;

    cout<<"\nstudent record added successfully\n\n";
    cout<<"student name is = "<<stu[count].name<<endl;
    cout<<"student roll number is = "<<stu[count].roll<<endl;
    cout<<"total marks = "<<total<<endl;
    cout<<"percentage = "<<percentage<<endl;

    count++;
    return;
}

void alldata(student stu[], int &count)
{
    for(int i=0;i<count;i++)
    {
        int total = stu[i].english + stu[i].maths + stu[i].science;
        float percentage = total/3.0;

        cout<<"student number = "<<i+1<<endl;
        cout<<"student name is = "<<stu[i].name<<endl;
        cout<<"student roll number is = "<<stu[i].roll<<endl;
        cout<<"english marks = "<<stu[i].english<<endl;
        cout<<"maths marks = "<<stu[i].maths<<endl;
        cout<<"science marks = "<<stu[i].science<<endl;
        cout<<"total marks = "<<total<<endl;
        cout<<"percentage = "<<percentage<<endl;
        cout<<"---------------------------------------------------------\n";
    }

    return;
}

void edit(student stu[], int &count)
{
    int roll;

    cout<<"enter the roll number of the student you wanna edit = ";
    cin>>roll;

    for(int i=0;i<count;i++)
    {
        if(roll==stu[i].roll)
        {
            int select;

            cout<<"1. change name\n";
            cout<<"2. change roll number\n";
            cout<<"3. change english marks\n";
            cout<<"4. change maths marks\n";
            cout<<"5. change science marks\n";
            cout<<"6. change all\n";

            cout<<"\nselect what you wanna change\n";
            cin>>select;

            switch(select)
            {
                case 1:
                {
                    cout<<"enter new name = ";
                    cin>>stu[i].name;
                    break;
                }

                case 2:
                {
                    cout<<"enter new roll number = ";
                    cin>>stu[i].roll;
                    break;
                }

                case 3:
                {
                    cout<<"enter new english marks = ";
                    cin>>stu[i].english;
                    break;
                }

                case 4:
                {
                    cout<<"enter new maths marks = ";
                    cin>>stu[i].maths;
                    break;
                }

                case 5:
                {
                    cout<<"enter new science marks = ";
                    cin>>stu[i].science;
                    break;
                }

                case 6:
                {
                    cout<<"enter new name = ";
                    cin>>stu[i].name;

                    cout<<"\nenter new roll number = ";
                    cin>>stu[i].roll;

                    cout<<"\nenter english marks = ";
                    cin>>stu[i].english;

                    cout<<"\nenter maths marks = ";
                    cin>>stu[i].maths;

                    cout<<"\nenter science marks = ";
                    cin>>stu[i].science;

                    break;
                }

                default:
                {
                    cout<<"enter valid option\n";
                    break;
                }
            }

            int total = stu[i].english + stu[i].maths + stu[i].science;
            float percentage = total/3.0;

            cout<<"student name is = "<<stu[i].name<<endl;
            cout<<"student roll number is = "<<stu[i].roll<<endl;
            cout<<"total marks = "<<total<<endl;
            cout<<"percentage = "<<percentage<<endl;
        }
    }

    return;
}

void deletestudent(student stu[], int &count)
{
    int roll;

    cout<<"enter the roll number of the student you wanna remove = ";
    cin>>roll;

    for(int i=0;i<count;i++)
    {
        if(roll==stu[i].roll)
        {
            for(int j=i;j<count-1;j++)
            {
                stu[j]=stu[j+1];
            }

            count--;
        }
    }

    cout<<"\nstudent record removed successfully\n";
    return;
}

int main()
{
    int choice, roll, count=0;

    student stu[100];

    stu[count].name="aman";
    stu[count].roll=101;
    stu[count].english=85;
    stu[count].maths=90;
    stu[count].science=88;
    count++;

    stu[count].name="mohit";
    stu[count].roll=102;
    stu[count].english=70;
    stu[count].maths=75;
    stu[count].science=80;
    count++;

    stu[count].name="anjali";
    stu[count].roll=103;
    stu[count].english=95;
    stu[count].maths=96;
    stu[count].science=98;
    count++;

    stu[count].name="vikas";
    stu[count].roll=104;
    stu[count].english=60;
    stu[count].maths=65;
    stu[count].science=70;
    count++;

    stu[count].name="sonam";
    stu[count].roll=105;
    stu[count].english=90;
    stu[count].maths=85;
    stu[count].science=92;
    count++;

    cout<<"1. search a student\n";
    cout<<"2. add a new student record\n";
    cout<<"3. print all student records\n";
    cout<<"4. edit student record\n";
    cout<<"5. remove student record\n";

    cout<<"\nenter your choice\n";
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            cout<<"enter the roll number = ";
            cin>>roll;
            search(stu,roll,count);
            break;
        }

        case 2:
        {
            addstudent(stu,count);
            break;
        }

        case 3:
        {
            alldata(stu,count);
            break;
        }

        case 4:
        {
            edit(stu,count);
            break;
        }

        case 5:
        {
            deletestudent(stu,count);
            break;
        }

        default:
        {
            cout<<"enter valid option\n";
            break;
        }
    }

    return 0;
}