// Write a program to Selection sort.

#include<iostream>
using namespace std;
int main()
{
    int n,a[100];
    cout << "enter the size of array= ";
    cin >> n;
    cout << "enter the element of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

    }
    for (int i = 0; i < n-1; i++)
    {
        int smlidx = i;
        for (int j = i+1; j< n ; j++)
        {
            if ( a[smlidx]>a[j])
            {
                smlidx = j;
                
            }
         swap ( a[i],a[smlidx]);
        }

    }
    cout << "sorted array is ";
    for (int i = 0; i < n; i++)
        {
            cout  << a[i] << " ";
        }
    
     return 0;
}