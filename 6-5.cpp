#include<stdio.h>
int sumup(int n)
{
	int x;
	int sum=0;
	for(x=1;x<=n;x++){
		sum+=x;
		} 
		return sum;
 } 
int main(void)
{
	int n;
	printf("请输入n：");scanf("%d",&n);
	printf("1到%d之间所有整数的和为%d",n,sumup(n));
	return 0; 
}
