// Write a program to Find string length without strlen().

#include<iostream>
#include<string>
using namespace std ;
int main ()
{
    int length =0 ;
    char s[100]; //string is stored in character
    cout << "enter the elements of string without spaces  ";
    cin >> s;
    int i=0;
    while (s[i] != '\0') // last element of string is always \o
    {
        length ++;
        i++;
    }
    cout << "\nlength of string is = " << length ;
    return 0;
    

}