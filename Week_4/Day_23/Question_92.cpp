	
// Write a program to Find maximum occurring character

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    int freq[256] = {0};
    for (char ch : s)
    {
        freq[(unsigned char)ch]++;
    }

    int maxFreq = 0;
    char maxChar = '\0';

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    cout << "Maximum occurring character is: " << maxChar << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}