#include<stdio.h>
int main(void)
{
	int i,j,n;
	puts("����һ��������");
	printf("�������м��㣺");scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
		putchar('*'); 
		putchar('\n');
	} 
	return 0;
 } 
