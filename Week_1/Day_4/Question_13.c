// Write a program to Generate Fibonacci series.
#include <stdio.h>
int main() {
    int n, f= 0,s= 1,a;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            a = i;
        } else {
            a = f + s;
            f = s;
            s = a;
        }
        printf("%d ", a);
    }
    return 0;
}