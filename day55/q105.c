#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int cand = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            cand = arr[i];
            count = 1;
        } else if (arr[i] == cand) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == cand) count++;
    }

    if (count > n / 2) printf("%d", cand);
    else printf("-1");

    return 0;
}
