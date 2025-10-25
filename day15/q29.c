// Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n;
    long long factorial = 1; // Use long long to handle large results

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial = %lld\n", factorial);
    }

    return 0;
}
