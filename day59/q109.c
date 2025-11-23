#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    scanf("%d", &k);

    int maxSum = 0, windowSum = 0;

    for (int i = 0; i < k; i++) windowSum += arr[i];
    maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum = windowSum + arr[i] - arr[i - k];
        if (windowSum > maxSum) maxSum = windowSum;
    }

    printf("%d", maxSum);

    return 0;
}
