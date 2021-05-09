#include<stdio.h>
int main(void)
{
	int i,n,m;
	printf("整数值：");scanf("%d",&n);
	m=0; 
	for(i=1;i<=n;i++){
	if(n%i==0){ 
	m++;
	printf("%d\n",i);
	} 
	}
	printf("约数有%d个。",m);
	return 0;
 } 
