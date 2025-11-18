#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    for(int d = 0; d < n + m - 1; d++) {
        int r = d < m ? 0 : d - m + 1;
        int c = d < m ? d : m - 1;

        while(r < n && c >= 0) {
            printf("%d ", a[r][c]);
            r++;
            c--;
        }
    }

    return 0;
}
