#include<stdio.h>
#include<limits.h>
int main(void){
	unsigned i;
	puts("请输入一个整数：");
	do{
		scanf("%d",&i);
		if(i>UINT_MAX)
		puts("输入的整型过大，请重新输入。");
	}while(i>UINT_MAX);
	printf("把整数向左移动2位后其值等于其乘以2的指数幂后的值：%u = %u\n",i<<2,i*2*2);
	printf("把整数向右移动2位后其值等于其乘以2的指数幂后的值：%u = %u\n",i>>2,i/2/2);
	return 0; 
} 
