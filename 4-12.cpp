#include<stdio.h>
int main(void)
{
	int no,x;
	int i; 
	printf("请输入一个正整数：");
	scanf("%d",&no);
	i=0; 
	x=no;
	while(no>0){
		no/=10;
		i++; 
	} 
	printf("%d的位数是%d",x,i);
	return 0;
 } 
