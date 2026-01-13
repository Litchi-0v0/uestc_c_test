#include <stdio.h>
int main(){//40   +20+20
        float a, b;
        scanf("%f",&a);//40

        float result = a;
        
        while(1){
            // scanf("%c",&s);
            char s = getchar();
             
            if (s == '+'){
                scanf("%f",&b);
                result = result +b;
            }
            else if (s == '-'){
                scanf("%f",&b);
                result = result -b;
            }
            else 
                break;
        }
        printf("%f\n",result);
        return 0;
}
        // while(1){ 
        
        // scanf("%c",&s);//+
        // }
    

//     float a;
//     scanf("%f",&a);
//     float result = a;
//     float b;


//     char x = getchar();


//     while(1){
//     switch (x)
//     {
//     case '+':
//     scanf("%f",&b);
//         result = result + b;
      
//     case '-':
//     scanf("%f",&b);
//         result = result - b;
//     case ';':
//         break;
//     }
// }
//     printf("%f",result);
//     // float result;
//     // float a;
//     // scanf("%f",&a);
//     // while(1){
//     //     char x = getchar();
//     //     if (x == ';'){
//     //         break;}
//     //     else if(x == '+' ){
//     //         result = a + x;
//     //     }
//     //     else if(x == '-' ){
//     //         result = a - x;
//     //     }
//     //     else {
//     //         a = x;
//     //     }
//     //     printf("%f",result);
//     // }
//     return 0;
// }