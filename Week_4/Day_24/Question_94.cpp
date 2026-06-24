// Write a program to Compress a string

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();

    for (int i = 0; i < n; i++) {
        int count = 1;

        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        cout << str[i] << count;
    }
    cout << endl;

    return 0;
}