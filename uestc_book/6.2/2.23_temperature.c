#include<stdio.h>
int main(){
    float F;
    float C;
    printf("Please input the temperature (F):\n");
    scanf("%f", &F);
    C = (float)5 / 9 * (F - 32);
    printf("The C temperature is:%f", C);
    return 0;
}