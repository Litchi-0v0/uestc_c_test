#include<stdio.h>
int main(){
    int i;
    int result = 0;
    printf("Enter a number: \n");
    scanf("%d", &i);
    if (i <= 5){
        for(int j = 1; j <= i; j++){
            result += j;
        }
        printf("result = %d\n", result);
    }
    else if (i > 5 && i <= 10){
        result = 100;
        for (int j = i; j >= 1; j--)
        {
            result -= j;
        }
        printf("result = %d\n", result);
    }
    else{
        printf("result = %d\n", i * i);
    }
    return 0;
}