// Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main() {
    int a, sum = 0;
    printf("Enter your number to find the sum of odd numbers:");
    scanf("%d", &a);


    for(int i = 1; i<=a; i++){
    sum +=(2*i-1); }

    printf("sum of first %d even numbers is :%d", a, sum);
return 0;
}
