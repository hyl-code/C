#include<stdio.h>
#include<limits.h>
int main(void){
	unsigned i;
	puts("������һ��������");
	do{
		scanf("%d",&i);
		if(i>UINT_MAX)
		puts("��������͹������������롣");
	}while(i>UINT_MAX);
	printf("�����������ƶ�2λ����ֵ���������2��ָ���ݺ��ֵ��%u = %u\n",i<<2,i*2*2);
	printf("�����������ƶ�2λ����ֵ���������2��ָ���ݺ��ֵ��%u = %u\n",i>>2,i/2/2);
	return 0; 
} 
