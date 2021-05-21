#include <stdio.h>
void main(){
    int num;
    int x = 0,y,i;

    printf("请输入5位整数：");
    scanf("%d",&num);

    y = num;
    for(i = 0;i < 5;i++){
        x *= 10;
        x += (y % 10);
        y /= 10;
    }

    if(num == x)
        printf("该数是回文数。");
    else
        printf("该数不是回文数。");
}
