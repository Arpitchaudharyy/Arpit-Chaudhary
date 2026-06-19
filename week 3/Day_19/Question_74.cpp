// Write a program to Subtract matrices

#include<iostream>
using namespace std;
int main()
{
    int r1,c1, a[10][10],b[10][10],c[10][10],r2,c2;
    cout << "enter the no. of rows and column in matrix a ";
    cin >> r1 >> c1;
    cout << "enter the elemets of matrix a\n";

// taking input for matrix A

    for (int i = 1; i <= r1; i++) 
    {
        for (int j = 1; j <= c1; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "enter the no. of rows and column in matrix b ";
    cin >> r2 >> c2;
    cout << "enter the elemets of matrix b\n";

// taking input for matrix B

    for (int i = 1; i <= r2; i++)
    {
        for (int j = 1; j <= c2; j++)
        {
            cin >> b[i][j];
        }
    }
// we can only add or suubtract matrix if they have equal number of rows and column.

    if (r1==r2 && c1==c2)
    {
        for (int i = 1; i <= r1; i++)
        {
            for (int j = 1; j <= c1; j++)
            {   
                c[i][j] = a[i][j] - b[i][j];
            }
        }

        cout << "subtraction of matrix a and b is \n";
        for (int i =1; i <= r1; i++)
    
        {  
             for (int j = 1; j <= c2; j++)
            {
       
                cout << c[i][j] << " ";
            }
            cout << endl;
    
        }
    }else {cout<< "subtraction is not possible ";}
    return 0;
}