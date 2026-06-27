// Write a program to Create voting eligibility system.
#include<iostream>
using namespace std;
int main ()
{
    int age;
    char pas;
    cout<<"enter your age = ";
    cin >> age;
    cout << "do you have voter id type y or n =";
    cin >> pas;
    if(age<18)
    {
        cout << "you are not elgible for voting\n";
        return 0;

    }
    if ( pas == 'n')
    {
        cout << "you are not elgible for voting\n";
        return 0;

    }
    cout << "\nyou are elegible for \n";
    return 0;
}
