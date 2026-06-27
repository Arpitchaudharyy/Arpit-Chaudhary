// Write a program to Create number guessing game.
#include<iostream>
#include<ctime>
using namespace std;
int main ()
{
    int n , m;
    srand(time(0)); 
    m = rand() % 100 +1;
    cout << "Welcome to the guessing game 😄\n";
    cout << "You have 5 chances to guess the correct number\n";
    for (int i = 0; i < 5; i++)
    {   
         cout << "choose a  number between 1 to 100 = ";
         cin >> n;
        if (m == n)
        {
            cout << "\ncongratulation 🎉🎉 you have guessed the right number\n";
            return 0;
        }
        if (m > n)
        {
            cout << "\nthe number is greater than  " << n <<endl;
        }
        if (m < n)
        {
            cout << "\nthe number is smaller than  " << n <<endl;
        }
    }
cout << "\nOOH NO YOU LOOSE 😪\n";
cout << "the number was " << m << endl;
return 0;
}