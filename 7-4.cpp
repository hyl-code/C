#include<stdio.h>
unsigned set(unsigned x,int pos){
	unsigned i=1;
	return x|unsigned (i<<pos);
}
unsigned reset(unsigned x,int pos){
	unsigned i=1;
	return x&unsigned (i<<pos);
}
unsigned inverse(unsigned x,int pos){
	unsigned i=1;
	return x^unsigned (i<<pos);
}
int main(void){
	unsigned x;
	int pos; 
	printf("��������������Ҫ������λ����"); 
	scanf("%u %u",&x,&pos);
	printf("����%dλ��Ϊ1���ֵ%d\n",pos,set(x,pos));
	printf("����%dλ��Ϊ0���ֵ%d\n",pos,reset(x,pos));
	printf("����%dλȡ�����ֵ%d",pos,inverse(x,pos)); 
	return 0;
}
