#include<stdio.h>
int main(void)
{
	int n,i,sum;
	printf("n��ֵ��");scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	sum+=i;
	
	printf("1��%d�ĺ�Ϊ%d",n,sum); 
	return 0;
 } 
