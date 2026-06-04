// Write a program to Find nth Fibonacci term.
#include <stdio.h>
int main() {
    int n, f= 0, s= 1, a;
    printf("Enter the position of the Fibonacci term: ");
    scanf("%d", &n);
    if (n == 1) {
        printf("The %dth Fibonacci term is: %d", n, f);
    } else if (n == 2) {
        printf("The %dth Fibonacci term is: %d", n, s);
    } else {
        for (int i = 3; i <= n; i++) {
            a = f + s;
            f = s;
            s = n;
        }
        printf("The %dth Fibonacci term is: %d\n", n, s);
    }
    return 0;
}