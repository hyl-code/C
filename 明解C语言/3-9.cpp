#include<stdio.h>
int main(void)
{ 
    int a,b,c;
	puts("����������������");
	printf("����1��");scanf("%d",&a);
	printf("����2��");scanf("%d",&b);
	printf("����3��");scanf("%d",&c);
	int min1,min2,min;
	min1=(a<b) ? a:b;
	min2=(b<c) ? b:c;
	min=(min1<min2) ? min1:min2;
	printf("��СֵΪ��%d��\n",min);
	return 0;	
 } 
