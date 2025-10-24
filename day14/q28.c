// Write a program to print the sum of the first n even numbers.
#include <stdio.h>
int main() {
    int a ;
    long long product = 1;

    printf("Enter your number to find the product of even numbers:");
    scanf("%d", &a);


    for(int i = 2; i<=a; i += 2){
    product *= i; 
}

    printf("sum of  first %d even numbers is :%lld", a, product);
return 0;
}
