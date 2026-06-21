// Write a program to Reverse a string

#include<iostream>
#include<string>
using namespace std ;
int main ()
{
    int length =0 ;
    string s;
    cout << "enter the elements of string without spaces  ";
    cin >> s;
    int i = 0;
    int j = s.size() - 1;
    while(i < j)
    {
        swap ( s[i],s[j]);
        i++;
        j--;
    }
    cout << "the new string is "<< s << endl;
    return 0;


}