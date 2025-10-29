#include <stdio.h>

int main() {
    int n, r, product = 1, flag = 0;
    scanf("%d", &n);
    while (n != 0) {
        r = n % 10;
        if (r % 2 != 0) {
            product *= r;
            flag = 1;
        }
        n /= 10;
    }
    if (flag == 0)
        product = 1;
    printf("%d", product);
    return 0;
}
