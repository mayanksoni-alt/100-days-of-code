#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
   
    temp = num1;   // Store the value of num1 in temp
    num1 = num2;   // Assign the value of num2 to num1
    num2 = temp;   // Assign the value stored in temp (original num1) to num2

    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
