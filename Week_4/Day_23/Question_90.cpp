// Write a program to Find first repeating character.

#include<iostream>
#include<string>
using namespace std ;
int main () 
{
    string s ;
    cout <<" enter the words = ";
    cin>> s;
    for (int  i = 0; i < s.size(); i++)
    {
        for (int j = i+1; j < s.size(); j++)
        {
           if(s[i]==s[j])
           {
            cout << s[i]<<" is the first repeating character\n";
            return 0;
           }
        }
        
    }
    cout << "every terms is not repeating in it";
    return 0;
}