#include <stdio.h>
void main(){
    long num,a,b;
    long i,j,k;

    scanf("%x",&num);

    a = num & 0x0000FFFF;
    b = (num & 0xFFFF0000) >> 16;

    if(a % 2 == 0)
        printf("该长整型数的低16位所表示的有符号数是偶数。\n");
    else
        printf("该长整型数的低16位所表示的有符号数是奇数。\n");

    if(b % 2 == 0)
        printf("该长整型数的高16位所表示的有符号数是偶数。\n");
    else
        printf("该长整型数的高16位所表示的有符号数是奇数。\n");

    a = a << 16;
    i = (b & 0xFF00) >> 8;
    i = ((b & 0x00FF) << 8) + i;
    j = (a & 0x00FF0000) << 8;
    j = ((a & 0xFF000000) >> 8) + j;
    k = i + j;
    printf("交换后结果为：%x",k);
}
