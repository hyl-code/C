#include<stdio.h>
int sqr(int i)
{
	return i*i;
}
int pow4(int i)
{
	return sqr(i)*sqr(i);
}
int main(void)
{
	int i;
	printf("请输入一个数：");scanf("%d",&i);
	printf("它的四次幂是%d",pow4(i)); 
	return 0; 
}
