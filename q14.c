#include<stdio.h>
int main(){
   char ch;
   int whilecontinue = 1;
  
   while(whilecontinue == 1){
    printf("Enter a character:");
    scanf(" %c", &ch);
     
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
      printf(" %c The character is a vowel.\n", ch);
      
    else  {
       printf(" %c The character is consonant.\n", ch);
    }
   printf("Do you want to continue? (1/0)");
   scanf("%d", &whilecontinue); }
  printf("Thank you for using the program.");
  return 0;
}
