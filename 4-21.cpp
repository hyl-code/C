#include<stdio.h>
int main(void)
{
	int i,j,n;
	puts("生成一个正方形");
	printf("正方形有几层：");scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
		putchar('*'); 
		putchar('\n');
	} 
	return 0;
 } 
