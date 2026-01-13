#include<stdio.h>
int main(){
    float I, S;
    printf("Please input the years`roat(I) and coat(S):\n");
    scanf("%f %f", &I, &S);
    float sum = S * (1 + I);
    printf("The sum of coat is : %8.2f", sum);
    return 0;

}