#include<stdio.h>
int main(){
    int p, r, t;
    float si, ci;
    printf("Enter princiiple, rate and time:");
    scanf("%d %d %d", &p, &r, &t);
    si  = p*r*t/100.0;
    ci = p*pow((1+r/100.0), t) - p;
    printf("Simple intrest = %f\n", si);
    printf("Compound intrest = %f\n", ci);
    return 0;
}
