#include<stdio.h>
int main(void){
	int a,b;
	int m,n;
	int i;
	
	printf("������������������");
	scanf("%d %d",&a,&b);
	
	m=(a>b) ? a:b;
	n=(a<b) ? a:b;
	if(m==0){ 
	printf("�������������������Ϊ��%d",(a<b) ? a:b);
	} 
	else{ 
	do{
		i=n;
		n=m%n;
	}while(n!=0);
	printf("�������������������Ϊ��%d",i);
	} 
	return 0; 
}
