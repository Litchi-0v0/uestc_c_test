#include <stdio.h>
int main(){
    printf("Please input two numbers:\n");
    int a,b;
    scanf("%d%d",&a,&b);
    if(a%b){
        printf("%d is not divisible by %d.\n",a,b);
    }
    else{
        printf("%d is divisible by %d.\n",a,b);
    }
    return 0;
}