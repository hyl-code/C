#include<stdio.h>
int function(int a,int b,int c){
	int min;
	min=(a<b) ? a : b;
	min=(c<min) ? c : min;
	return min;
}
int main(void){
	int a,b,c;
	
	printf("��������������");scanf("%d %d %d",&a,&b,&c);
	printf("����������С����Ϊ��%d",function(a,b,c));
	return 0; 
}
