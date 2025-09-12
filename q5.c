#include<stdio.h>
int main() {
 float fahrenheit, celsius;
      printf("enter the temprature:");
      scanf("%f\n", &celsius);
      fahrenheit = (celsius * 9/5) + 32;
      printf("temprature in fahrenheit = %.2f\n", fahrenheit);
      return 0;
}
