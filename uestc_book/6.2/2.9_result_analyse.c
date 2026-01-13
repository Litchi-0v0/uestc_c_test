#include<stdio.h>
int main()
{
    char i = 'a';
    char j = 'b';
    char k = 'c';
    char m = '\101';
    char n = '\116';
    printf("a%cb%c\tc%c\tabc\n", i, j, k);
    printf("\tb%c%c", m, n);//八进制转义
    // int t =!(13<20)&&!13||4 ;
    // printf("%d", t);

    return 0;
}