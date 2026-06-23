// Write a program to Find first non-repeating character.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter the word: ";
    cin >> s;

    int freq[256] = {0};

    // Count frequency of each character
    for (char ch : s)
    {
        freq[ch]++;
    }

    // Find first non-repeating character
    for (char ch : s)
    {
        if (freq[ch] == 1)
        {
            cout << ch << " is the first non-repeating character\n";
            return 0;
        }
    }

    cout << "Every character repeats in it";
    return 0;
}