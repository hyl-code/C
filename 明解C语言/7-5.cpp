#include<stdio.h>
unsigned set_n(unsigned x,int pos,int n){
	int i;
	int m;
	for(i=pos;i<=pos+n-1;i++){
		unsigned m=(1u<<i);
        x=(m|x);
	}
	return x;
}
unsigned reset_n(unsigned x,int pos,int n){
	int i;
	int m;
	for(i=pos;i<=pos+n-1;i++){
		unsigned m=(1u<<i);
        x=(m&x);
	}
	return x;
}
unsigned inverse_n(unsigned x,int pos,int n){
	int i;
	int m;
	for(i=pos;i<=pos+n-1;i++){
		unsigned m=(1u<<i);
        x=(m^x);
	}
	return x;
}
int main(void){
	unsigned x;
	int pos;
	int n;
	printf("����������������ʼ�ƶ���λ����Ҫ������λ������"); 
	scanf("%u %d %d",&x ,&pos,&n);
	printf("����%dλ����%dλ��Ϊ1���ֵ%u\n",pos,pos+n-1,set_n(x,pos,n));
	printf("����%dλ����%dλ��Ϊ0���ֵ%u\n",pos,pos+n-1,reset_n(x,pos,n));
	printf("����%dλ����%dλȡ�����ֵ%u",pos,pos+n-1,inverse_n(x,pos,n)); 
	return 0;
}
