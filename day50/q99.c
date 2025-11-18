#include <stdio.h>

int main() {
    int dd, mm, yyyy;
    char month[4];

    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    switch(mm) {
        case 1: strcpy(month, "Jan"); break;
        case 2: strcpy(month, "Feb"); break;
        case 3: strcpy(month, "Mar"); break;
        case 4: strcpy(month, "Apr"); break;
        case 5: strcpy(month, "May"); break;
        case 6: strcpy(month, "Jun"); break;
        case 7: strcpy(month, "Jul"); break;
        case 8: strcpy(month, "Aug"); break;
        case 9: strcpy(month, "Sep"); break;
        case 10: strcpy(month, "Oct"); break;
        case 11: strcpy(month, "Nov"); break;
        case 12: strcpy(month, "Dec"); break;
    }

    printf("%02d-%s-%d", dd, month, yyyy);
    return 0;
}
