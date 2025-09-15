// Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d\n", &num);
    if(num%2==0){
        printf("\nThe numbr is even");
    } else {
        printf("\nThe number is odd");
    }  
    return 0;
}
