#include <stdio.h>
void main(){
    int num;
    int x = 0,y,i;

    printf("������5λ������");
    scanf("%d",&num);

    y = num;
    for(i = 0;i < 5;i++){
        x *= 10;
        x += (y % 10);
        y /= 10;
    }

    if(num == x)
        printf("�����ǻ�������");
    else
        printf("�������ǻ�������");
}
