#include<stdio.h>
int main(){
    int year;
    int shouldcontinue = 0;
  while (shouldcontinue == 0) {
    printf("Enter the year;");
    scanf("%d", &year);
      if(year%4==0) {
        printf("The year is leap year");
    } else {
      printf("The year is leap year");
    } printf("\nDo you want to continue? (1/0)"); 
      scanf("%d", &shouldcontinue); 
  } 
  printf("Thank you for using the program!"); 
    return 0;
}
