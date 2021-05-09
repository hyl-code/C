#include<stdio.h>
int main(void)
{
	int i,x;
	printf("请输入一个整数：");scanf("%d",&x);
	i=2;
	while(i<=x){
	printf("%d\n",i);
	i*=2;
}
	return 0;
 } 
