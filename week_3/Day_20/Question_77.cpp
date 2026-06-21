// Write a program to Multiply matrices.

#include<iostream>
using namespace std;

void multiply(int a[10][10], int b[10][10],int r1,int r2,int c1 , int c2)
{ 
    int c[10][10] = {0};
    if (c1 != r2)
    {
        cout << "multiplication is not possible\n";
        return ;
    }
    for (int i = 0; i < r1; i++)
    {   
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
            
        }
        
    }
    cout << "multiplication of the matrix is \n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << c[i][j]<<" ";
        }
        cout<<'\n';
    }
    return ;
    
}

int main()
{
    int r1,c1, a[10][10],b[10][10],r2,c2;
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
    cout << "enter the no. of rows and column in matrix b ";
    cin >> r2 >> c2;
    cout << "enter the elemets of matrix b\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    multiply (a,b,r1,r2,c1,c2);
}