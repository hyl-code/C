#include<stdio.h>
int main(void){
	int num;
	int i;
	int n=1; 
	
	printf("������һ��������");scanf("%d",&num);
	for(i=num;i>0;i--){
		n*=i;
	}
	printf("%d�Ľ׳�Ϊ%d",num,n);
	return 0;
} 
