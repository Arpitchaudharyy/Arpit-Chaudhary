// Write a program to Check string rotation.
// ----> A string rotation means one string can be obtained by moving characters from the beginning of another string to its end (or vice versa), without changing their order.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s , p;
    cout << "enter the string one = ";
    getline(cin , s);
    cout << "\nenter the string two = ";
    getline(cin , p);
    if (s.size() != p.size())
    {
        cout << "No string rotation\n";
        return 0;
    }
    string a = s + s;
    
    if (a.find(p) != string::npos)
    {
         cout << "string rotation found\n";
         return 0;
    }
    cout << "its not a rotated string\n";
    return 0;


}