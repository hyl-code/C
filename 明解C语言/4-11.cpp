#include<stdio.h>
int main(void)
{
	int no;
	printf("������һ����������");
	scanf("%d",&no);
	printf("%d������ʾ�Ľ����",no);
	while(no>0){
		printf("%d",no%10);
		no/=10;
	}
	puts("��");
	return 0;
 } 
