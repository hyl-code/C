#include<stdio.h>
int main(void){
	int num;
	int i;
	int n=1; 
	
	printf("请输入一个整数：");scanf("%d",&num);
	for(i=num;i>0;i--){
		n*=i;
	}
	printf("%d的阶乘为%d",num,n);
	return 0;
} 
