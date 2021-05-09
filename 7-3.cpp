#include<stdio.h>
unsigned rrotate(unsigned x,int n){
	return x>>n;
} 
unsigned lrotate(unsigned x,int n){
	return x<<n;
}
int main(void){
	unsigned i;
	int m;
	printf("请输入整数和移动位数：");scanf("%d %d",&i,&m);
	printf("%u向右移%d后的值为%d\n",i,m,rrotate(i,m)); 
	printf("%u向左移%d后的值为%d",i,m,lrotate(i,m));
	return 0;
}
