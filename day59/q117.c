#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);   // size of first array

    int a[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n);   // size of second array

    int b[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int i = 0, j = 0;
    int c[m + n];
    int k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < m)
        c[k++] = a[i++];

    while (j < n)
        c[k++] = b[j++];

    for (int x = 0; x < m + n; x++)
        printf("%d ", c[x]);

    return 0;
}
