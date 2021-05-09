#include<stdio.h>
int main(void)
{
	int no;
	printf("请输入一个整数：");
	scanf("%d",&no);
	switch(no%2){
	case 0 :puts("该整数为偶数"); break;
	case 1 :puts("该整数为奇数"); break;
	} 
	return 0;
 } 
