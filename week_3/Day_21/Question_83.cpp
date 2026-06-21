// Write a program to Count vowels and consonants.

#include<iostream>
#include<string>
using namespace std ;
int main ()
{
    int length =0,vowel=0,consonants=0 ;
    string s;
    cout << "enter the letter without spaces ";
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if ( s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'U' || s[i] == 'u')
        {
            vowel++;
        }else{
            consonants++;
        }
    
    }
    cout << "number of consonants are = " << consonants << "\nnumber of vowels are = "<< vowel << endl;
    return 0;
}