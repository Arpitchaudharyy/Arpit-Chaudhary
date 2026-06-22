// Write a program to Check palindrome string.

#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string s,p;
    cout << "enter the string = ";
    cin >> s;
     p = s;
    int i = 0;
    int j = s.size() - 1;
    while(i < j)
    {
        swap ( s[i],s[j]);
        i++;
        j--;
    }
    if ( p == s)
    {
        cout << "String is palindrome \n";

    }else{
    cout << "String is not palindrome\n";
    }
    return 0;



}