#include<stdio.h>
int main() {
    char ch;
    int whilecountinue = 1; 
    while (whilecountinue == 1) {
         printf("Enter a character: ");
          scanf(" %c", &ch);
   if (ch >= 'A' && ch <= 'Z')
        printf("%c is an uppercase alphabet.\n", ch);
    else 
        if (ch >= 'a' && ch <= 'z')
           printf("%c is an lowercase alphabet.\n", ch);
        else
            if (ch >= '0' &&  ch <= '9')
                  printf("%c is a digit.\n", ch);
            else
                  printf(" %c ia a special character.\n", ch);
    printf("Do you want to continue? (1 for yes, 0 for no): ");
    scanf("%d", &whilecountinue); 
}
    return 0;
} 
