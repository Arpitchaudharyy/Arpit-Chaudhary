// Write a program to Character frequency.


#include<iostream>
#include<string>
using namespace std;

int freq (char  n , string s)
{
    int fr = 0;
    for (int j = 0; j < s.size(); j++)
    {
       if (n==s[j])
       {
        fr++;
       }
    }
    return fr;
    
}

int main ()
{
    char n;
    string s;
    cout << "enter the string = ";
    cin >> s;
    cout << "enter the element you wanna search = ";
    cin >> n;
    cout <<"frequency of the element is = "<< freq(n,s) << endl;
    return 0;
}