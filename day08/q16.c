#include<stdio.h>
 int main() {
  int a, b, c;
  int whilecountinue = 1;
 while (whilecountinue == 1) {
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);
   
    if ( a > b && a > c)
      printf(" %d is the largest number.", a);
    else if (b > c && b > a)
      printf("%d is the largest number.", b);
    else
      printf("%d is the largest number.", c); 

    printf("\nDo you want to continue? (1/0)");
    scanf("%d", &whilecountinue);
   if (whilecountinue == 0) {
   printf("Thanks for using this program. "); 
    }   
 } 
      return 0;
 }
