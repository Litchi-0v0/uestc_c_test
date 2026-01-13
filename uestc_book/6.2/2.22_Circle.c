#include<stdio.h>
#include<math.h>

int main(){
    float r;
    printf("Please input the r of the Circle:\n");
    scanf("%f", &r);
    float S = 3.14 * r * r;
    float C = 2 * 3.14 * r;
    printf("\nS = %f\nC = %f\n", S, C);
    return 0;

}