// Write a program to Check Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int n,o,p,r= 0,d = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    p = n;
    while (o != 0) {
        o /= 10;
        d++;
    }
    o = n;
    while (o != 0) {
        p = o % 10;
        r += pow(p, d);
        o = o /10;
    }
    if (r == n) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }
    return 0;
}