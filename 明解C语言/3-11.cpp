#include<stdio.h>
int main(void)
{
	int a,b;
	puts("����������������");
	printf("����A��");scanf("%d",&a);
	printf("����B��");scanf("%d",&b);
	if(a>b)
	{int c1;
	c1=a-b;
	if(c1<=10)
	printf("���ǵĲ�С�ڵ���10��");
	else
	printf("���ǵĲ���ڵ���10��"); 
	}
	else
	{int c2;
	c2=b-a;
	if(c2<=10)
	printf("���ǵĲ�С�ڵ���10��");
	else
	printf("���ǵĲ���ڵ���10��"); 
	}
	return 0; 
 } 
