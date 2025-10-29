#include <stdio.h>

int main() {
    int n, temp, r, fact, i, sum = 0;
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        r = n % 10;
        fact = 1;
        for (i = 1; i <= r; i++)
            fact *= i;
        sum += fact;
        n /= 10;
    }
    if (sum == temp)
        printf("Strong number");
    else
        printf("Not strong number");
    return 0;
}

