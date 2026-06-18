// Write a program to Bubble sort.

#include<iostream>
using namespace std;
int main(){
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
        for (int j = 0; j < n-i-1; j++)
        {
            
            if (a[j]>a[j+1]){
                swap (a[j],a[j+1]);
            }
        }
        cout << "sorted array is ";
        for (int i = 0; i < n; i++)
        {
            cout << "\n" << a[i];
        }
        
    }
    
     return 0;
}
