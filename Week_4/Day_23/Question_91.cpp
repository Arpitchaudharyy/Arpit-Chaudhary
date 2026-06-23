// Write a program to Check anagram strings.

#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int sfreq[256] = {0} , pfreq[256] = {0} , i = 0;
    string s,p;
    cout <<"enter the first string s = ";
    getline(cin,s);
    cout << "\n enter the second string = ";
    getline (cin,p);
    if(s.size() != p.size())
    {
        cout << "string is not anagram\n";
        return 0;
    }
   
    for ( char ch : s)
    {
        sfreq[ch]++;
    }
    for ( char ch : p)
    {
        pfreq[ch]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if(sfreq[i] != pfreq[i])
        {
            cout << "string is not anagram\n";
            return 0;
        }
        
    }
    cout << "string is anagram\n";
     return 0;


}