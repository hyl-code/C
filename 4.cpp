#include<stdio.h>
int main(void){
	int a,b;
	int m,n;
	int i;
	
	printf("请输入两个正整数：");
	scanf("%d %d",&a,&b);
	
	m=(a>b) ? a:b;
	n=(a<b) ? a:b;
	if(m==0){ 
	printf("两个正整数的最大公因子为：%d",(a<b) ? a:b);
	} 
	else{ 
	do{
		i=n;
		n=m%n;
	}while(n!=0);
	printf("两个正整数的最大公因子为：%d",i);
	} 
	return 0; 
}
