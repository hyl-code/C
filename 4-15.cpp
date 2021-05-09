#include<stdio.h>
int main(void)
{
	int a,b,c;
	int i;
	printf("开始数值（cm）：");scanf("%d",&a);
	printf("结束数值（cm）：");scanf("%d",&b);
	printf("间隔数值（cm）：");scanf("%d",&c);
	for(i=a;i>=a && i<=b;i+=c)
	printf("%dcm   %.2fkg\n",i,(i-100)*0.9);
	return 0;
 } 
