#include<stdio.h>
int main(void)
{
	int a,b,c;
	puts("����������������");
	printf("����A��");scanf("%d",&a);
	printf("����B��");scanf("%d",&b);
	printf("����C��");scanf("%d",&c);
	if(a==b && a==c && b==c)
	printf("����ֵ����ȡ�");
	else if(a==b || b==c || a==c)
	printf("������ֵ��ȡ�");
	else
	printf("����ֵ������ͬ��");
	return 0;  
 } 
