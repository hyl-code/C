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
	printf("������һ������");scanf("%d",&i);
	printf("�����Ĵ�����%d",pow4(i)); 
	return 0; 
}
