#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped;
    scanf("%d", &n);
    last = n % 10;
    digits = (int)log10(n);
    first = n / pow(10, digits);
    swapped = last * pow(10, digits) + (n % (int)pow(10, digits)) / 10 * 10 + first;
    printf("%d", swapped);
    return 0;
}
