#include<stdio.h>
int main(void)
{
	int a,b;
	puts("请输入两个整数。");
	printf("整数A：");scanf("%d",&a);
	printf("整数B：");scanf("%d",&b);
	if(a>b)
	{int c1;
	c1=a-b;
	if(c1<=10)
	printf("它们的差小于等于10。");
	else
	printf("它们的差大于等于10。"); 
	}
	else
	{int c2;
	c2=b-a;
	if(c2<=10)
	printf("它们的差小于等于10。");
	else
	printf("它们的差大于等于10。"); 
	}
	return 0; 
 } 
