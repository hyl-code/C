#include<stdio.h>
int main(void)
{
	int a,b;
	int sum = 0;
	int x;
	puts("请输入两个整数。");
	printf("整数a：");scanf("%d",&a);
	printf("整数b：");scanf("%d",&b);
	x=a; 
	do{
		sum+=x;
		x--;
	}while(x!=b-1);
	printf("大于等于%d小于等于%d的所有整数的和是%d。",a,b,sum);
	return 0;
 } 
