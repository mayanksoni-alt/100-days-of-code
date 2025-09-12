#include <stdio.h>
int main(void){
    int length,breadth,area,perimeter;
    printf("length of rectangle: \n");
    scanf("%d", &length);
    printf("breadth of rectangle: \n");
    scanf("%d", &breadth);
    area=(length*breadth);
    perimeter=2*(length+breadth);
    printf("area and perimeter of a reactangle with dimentions %d and %d is %d and %d",length,breadth,area,perimeter);
    return 0;
}
