// Write a program to Transpose matrix.

#include<iostream>
using namespace std;
int main()
{
    int r1,c1, a[10][10],b[10][10];
    cout << "enter the no. of rows and column in matrix a ";
    cin >> r1 >> c1;
    cout << "enter the elemets of matrix a\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    cout << "the transpose of matrix is \n";
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            cout << b[i][j]<< " ";
        }
        cout << endl;
    }
    return 0;
}
