// Write a program to Count words in a sentence.

#include<iostream>
#include<string>
using namespace std ;
int main ()
{
    int i=0, words = 1;
    string s ;
    cout << "enter the sentence = ";
    getline ( cin , s);
    while(s[i] != '\0')
    {
        if( s[i] == ' ')
        {
            words ++;
        }
        i++;
    }
    cout << "the number of words in the sentence is = " << words << endl;
    return 0;
}