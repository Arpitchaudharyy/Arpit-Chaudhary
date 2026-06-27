// Write a program to Create quiz application.

#include<iostream>
using namespace std;
int main()
{
    int n ,m , l;
    cout << "•WELCOME TO THE QUIZ•\n";
    cout << "Please enter your answer according to option like 1/2/3";
    cout << "easy level begins\n";
    cout << "who is the prime ministerof India\n"<<"1.Narendra Modi\n"<<"2.Rahul Gandhi\n";
    cin >> n;
    if ( n != 1)
    {
        cout << "Your answer is incorrect\n";
        cout << "You lose";
        return 0 ;
    }
    cout << " You have successfully cleared the easy level \n";
    cout << "\nMEDIUM LEVEL\n "<< endl;
    cout << "Who is the father of computer \n" << "1. Charles Morige\n"<< "2. Charles Babbage\n"<< "3. Alan Turing\n";
    cin >> m;
     if ( m != 2)
    {
        cout << "Your answer is incorrect\n";
        cout << "You lose";
        return 0 ;
    }
    cout << " You have successfully cleared the medium level \n";
    cout << "\nHARD LEVEL\n "<< endl;
    cout << " On which date the constitution of india is implemented\n"<<"1.January 26, 1950\n " << "2. January 26 1947\n" <<"3. november 26 1949\n";
    cin >> l;
    if ( l != 1)
    {
        cout << "Your answer is incorrect\n";
        cout << "You lose";
        return 0 ;
    }
    cout << "\nBravo you just cleared all the levels\n";
    cout << "quiz completed\n";
    return 0;

    
}

