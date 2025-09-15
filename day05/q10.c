#include<stdio.h>
int main(){
   int seconds;
   printf("Enter the seconds:");
   scanf("%d\n", &seconds);
   int hours = seconds/3600;
   int minutes = seconds/60;
   int sec = seconds%60;
   printf("The time is %d hours, %d minutes and %d seconds", hours, minutes, sec);
  return 0;
}
