#include<stdio.h>
int sqr(int x)
{
	return x*x*x;
 }
int main(void)
{
	int x;
	printf("������һ��������");scanf("%d",&x);
	printf("����������%d",sqr(x)); 
	return 0;
 } 
