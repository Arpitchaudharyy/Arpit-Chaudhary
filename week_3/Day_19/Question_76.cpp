// Write a program to Find diagonal sum.

#include<iostream>
using namespace std;
int main()
{
    int r1,c1, a[10][10],sum=0;
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
    if (r1!=c1)
    {
        cout << "diagonal sum is not possible";
        return 0;
    }
    for (int i = 0; i < r1; i++)
    {
         sum += a[i][i];    
    }
    cout << "sum of diagonal element is = "<< sum << endl;
    return 0;

}