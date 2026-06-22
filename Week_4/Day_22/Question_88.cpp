// Write a program to Remove spaces from string.

#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int i =0;
    string s , p;
    cout << "enter the string = ";
    getline(cin , s);
    while (s[i] != '\0')
    {
        if ( s[i] != ' ')
        {
            p += s[i];

        }
        i++;
    }
    cout << "the spaces without spaces is = \n" << p << endl;
    return 0;

}