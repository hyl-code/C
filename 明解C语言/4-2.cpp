#include<stdio.h>
int main(void)
{
	int a,b;
	int sum = 0;
	int x;
	puts("����������������");
	printf("����a��");scanf("%d",&a);
	printf("����b��");scanf("%d",&b);
	x=a; 
	do{
		sum+=x;
		x--;
	}while(x!=b-1);
	printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d��",a,b,sum);
	return 0;
 } 
