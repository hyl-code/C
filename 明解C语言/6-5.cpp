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
	printf("������n��");scanf("%d",&n);
	printf("1��%d֮�����������ĺ�Ϊ%d",n,sumup(n));
	return 0; 
}
