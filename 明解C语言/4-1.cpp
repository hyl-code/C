#include<stdio.h> 
int main(void)
{
	int no,a;
	do{
		printf("������һ��������");
		scanf("%d",&no);
		if(no==0)
		printf("������Ϊ0��");
		else if(no>0)
		printf("������Ϊ������");
		else
		printf("������Ϊ������");
		printf("�Ƿ������<Yes...0/No...9>:");scanf("%d",&a); 
	}while(a==0);
	return 0;
 } 
