#include<stdio.h>
int main(void)
{
	int a,b,c,min;
	puts("����������������");
	printf("����1��");scanf("%d",&a);
	printf("����2��");scanf("%d",&b);
	printf("����3��");scanf("%d",&c);
	min=a;
	if(b<min)
	min=b;
	if(c<min)
	min=c;
	printf("��СֵΪ��%d��\n",min);
	return 0;
 } 
