#include<stdio.h>
int min3(int a,int b,int c)
{
	int min=a;
	if(a>b) min=b;
	if(b>c) min=c;
	return min;
 } 
int main(void)
{
	int a,b,c;
	puts("����������������"); 
	printf("����a��"); scanf("%d",&a);
	printf("����b��"); scanf("%d",&b);
	printf("����c��"); scanf("%d",&c);
	printf("��СֵΪ%d",min3(a,b,c));
	return 0;
 } 
