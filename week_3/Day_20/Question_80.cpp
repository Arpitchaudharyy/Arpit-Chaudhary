// Write a program to Find column-wise sum

#include<iostream>
using namespace std;
int main()
{
    int r1,c1, a[10][10],s;
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
    for (int i = 0; i < r1; i++)
    {
        s=0;
        cout << "sum of column "<<i+1<<" is= ";
        for (int j = 0; j < c1; j++)
        {
             s = s + a[j][i];
        }
        cout << s<<'\n'; 
    }
    return 0;
}