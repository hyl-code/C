#include<stdio.h>
int sqr(int x)
{
	return x*x*x;
 }
int main(void)
{
	int x;
	printf("请输入一个整数：");scanf("%d",&x);
	printf("它的立方：%d",sqr(x)); 
	return 0;
 } 
