#include <stdio.h>
int main(){
    int height, weight;
    printf("Please input your height(cm) and weight(kg):\n");
    scanf("%d%d",&height,&weight);
    int b_weight = (height - 110);
    if (weight >= b_weight + 5){
        printf("Your are overweight. You should lose some weight.\n");
    }
        else if (weight <= b_weight - 5){
            printf("Your are underweight. You should gain some weight.\n");
        }
        else{
            printf("Your weight is normal.\n");
        }
    return 0;
}