#include<stdio.h>
int main(void)
{
	int a,b,c;
	int i;
	printf("��ʼ��ֵ��cm����");scanf("%d",&a);
	printf("������ֵ��cm����");scanf("%d",&b);
	printf("�����ֵ��cm����");scanf("%d",&c);
	for(i=a;i>=a && i<=b;i+=c)
	printf("%dcm   %.2fkg\n",i,(i-100)*0.9);
	return 0;
 } 
