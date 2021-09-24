#include<stdio.h>
int main(void)
{
	int a,b;
	int x;
	puts("请输入两个整数。");
	printf("整数1：");scanf("%d",&a);
	printf("整数2：");scanf("%d",&b);
	x = a*b;
	printf("它们的乘积是%d。",x);
	return 0; 
 } 
