#include<stdio.h>
int main(void)
{
	int n,i,sum;
	printf("n的值：");scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	sum+=i;
	
	printf("1到%d的和为%d",n,sum); 
	return 0;
 } 
