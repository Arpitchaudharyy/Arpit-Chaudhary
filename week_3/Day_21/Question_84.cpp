// Write a program to Convert lowercase to uppercase.

#include<iostream>
#include<string>
using namespace std ;
int main ()
{
    int length =0,vowel=0,consonants=0 ;
    string s;
    cout << "enter the letter without spaces ";
    cin >> s;
    int i=0;
    while(s[i]>='a'&& s[i]<='z')
    {
        s[i] = s[i] - 32 ;
        i++;
    }
    cout << s << endl ;
    return 0;
}