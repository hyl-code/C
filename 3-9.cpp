#include<stdio.h>
int main(void)
{ 
    int a,b,c;
	puts("请输入三个整数。");
	printf("整数1：");scanf("%d",&a);
	printf("整数2：");scanf("%d",&b);
	printf("整数3：");scanf("%d",&c);
	int min1,min2,min;
	min1=(a<b) ? a:b;
	min2=(b<c) ? b:c;
	min=(min1<min2) ? min1:min2;
	printf("最小值为：%d。\n",min);
	return 0;	
 } 
