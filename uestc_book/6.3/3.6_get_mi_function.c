#include <stdio.h>
int main(){
    float x;
    int y;
    printf("Enter x(float number) and y(int number): \n");
    scanf("%f %d", &x, &y);
    float result = x;
    while( y > 1 ){
        result *= x;
        y--;
    }
    printf("result = %f\n", result);
    return 0;
}