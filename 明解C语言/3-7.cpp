#include<stdio.h>
int main(void)
{
	int a,b,c,d,max;
	puts("�������ĸ�������");
	printf("����1��");scanf("%d",&a);
	printf("����2��");scanf("%d",&b);
	printf("����3��");scanf("%d",&c);
	printf("����4��");scanf("%d",&d);
	max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	if(d>max)
	max=d;
	printf("���ֵΪ��%d��\n",max);
	return 0;
 } 
