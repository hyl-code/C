#include<stdio.h>
int main(void)
{
	int i,n,m;
	printf("����ֵ��");scanf("%d",&n);
	m=0; 
	for(i=1;i<=n;i++){
	if(n%i==0){ 
	m++;
	printf("%d\n",i);
	} 
	}
	printf("Լ����%d����",m);
	return 0;
 } 
