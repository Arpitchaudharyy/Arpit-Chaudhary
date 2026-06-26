// Write a program to Merge two sorted arrays.

#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int  n ,m,  a[100] , b[100] , c[200] , i, k=0;
    cout << "enter the size of first array";
    cin >> n;
    cout << "\nenter the size of second array";
    cin >> m;
    cout << "enter the element of array one = \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\nenter the element of second array = \n";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];

    }
    sort (a , a+n);
    sort (b , b+m);
    for (int  i = 0; i < n; i++)
    {
        c[i] = a[i];

    }
    for (int j = 0; j < n+m; j++)
    {

        c[n+j] = b[k];
        k++;
    }
    cout << " merged array of first and second is = \n";
    cout << "c[";
    for (int i = 0; i < m; i++)
    {
        cout << c[i] <<" ";
    }
    cout << "]\n";
    return 0;
    
    
    



    
    
    
}