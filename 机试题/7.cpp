#include<stdio.h>
unsigned inverse_n(unsigned x,int pos,int n){
	int a;
	int i;
	
	for(i=0;i<n;i++){
		a=1<<(pos+i);
	}
	return (x ^ a);
}
int main(void){
	int pos;
	unsigned x;
	int n;
	
	printf("x=");scanf("%u",&x);
	printf("n=");scanf("%d",&n);
	printf("pos=");scanf("%d",&pos);
	printf("���޷�������%u�ĵ�%dλ��ʼ��%dλȡ�����ֵ:%d",x,pos,n,inverse_n(x,pos,n));
	return 0;
}
