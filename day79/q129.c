#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    int num, sum = 0, count = 0;

    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(fp);

    double avg = (count > 0) ? (double)sum / count : 0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2lf", avg);

    return 0;
}
