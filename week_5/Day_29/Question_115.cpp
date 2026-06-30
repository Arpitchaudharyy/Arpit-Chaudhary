// Write a program to Create menu-driven string operations system
#include<iostream>
#include<string>
using namespace std;

void inputString(string &s)
{
    cout << "Enter string = ";
    cin.ignore();
    getline(cin, s);
}

void display(string s)
{
    cout << "String = " << s << endl;
}

void length(string s)
{
    cout << "Length = " << s.length() << endl;
}

void uppercase(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    cout << "Uppercase = " << s << endl;
}

void lowercase(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    cout << "Lowercase = " << s << endl;
}

void reverseString(string s)
{
    string rev = "";

    for(int i = s.length() - 1; i >= 0; i--)
    {
        rev += s[i];
    }

    cout << "Reverse = " << rev << endl;
}

void countVowels(string s)
{
    int count = 0;

    for(int i = 0; i < s.length(); i++)
    {
        char c = tolower(s[i]);

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }

    cout << "Vowels = " << count << endl;
}

void countWords(string s)
{
    int count = 1;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ')
        {
            count++;
        }
    }

    cout << "Words = " << count << endl;
}

void palindrome(string s)
{
    string rev = "";

    for(int i = s.length() - 1; i >= 0; i--)
    {
        rev += s[i];
    }

    if(rev == s)
        cout << "Palindrome String\n";
    else
        cout << "Not Palindrome\n";
}

void concatStrings(string s)
{
    string s2;

    cout << "Enter second string = ";
    cin.ignore();
    getline(cin, s2);

    cout << "Concatenated = " << s + " " + s2 << endl;
}

void findCharacter(string s)
{
    char ch;
    cout << "Enter character to search = ";
    cin >> ch;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ch)
        {
            cout << "Character found at position " << i + 1 << endl;
            return;
        }
    }

    cout << "Character not found\n";
}

int main()
{
    string s;
    int choice;

    inputString(s);

    do
    {
        cout << "\n===== MENU DRIVEN STRING OPERATIONS =====\n";
        cout << "1. Display String\n";
        cout << "2. Length of String\n";
        cout << "3. Uppercase\n";
        cout << "4. Lowercase\n";
        cout << "5. Reverse String\n";
        cout << "6. Count Vowels\n";
        cout << "7. Count Words\n";
        cout << "8. Palindrome Check\n";
        cout << "9. Concatenate String\n";
        cout << "10. Find Character\n";
        cout << "11. Exit\n";

        cout << "Enter choice = ";
        cin >> choice;

        switch(choice)
        {
            case 1 :
            {
                display(s);
                break;
            }

            case 2 :
            {
                length(s);
                break;
            }

            case 3 :
            {
                uppercase(s);
                break;
            }

            case 4 :
            {
                lowercase(s);
                break;
            }

            case 5 :
            {
                reverseString(s);
                break;
            }

            case 6 :
            {
                countVowels(s);
                break;
            }

            case 7 :
            {
                countWords(s);
                break;
            }

            case 8 :
            {
                palindrome(s);
                break;
            }

            case 9 :
            {
                concatStrings(s);
                break;
            }

            case 10 :
            {
                findCharacter(s);
                break;
            }

            case 11 :
            {
                cout << "Thank You!\n";
                break;
            }

            default :
            {
                cout << "Invalid Choice!\n";
            }
        }

    } while(choice != 11);

    return 0;
}