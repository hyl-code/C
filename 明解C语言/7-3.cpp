#include<stdio.h>
unsigned rrotate(unsigned x,int n){
	return x>>n;
} 
unsigned lrotate(unsigned x,int n){
	return x<<n;
}
int main(void){
	unsigned i;
	int m;
	printf("�������������ƶ�λ����");scanf("%d %d",&i,&m);
	printf("%u������%d���ֵΪ%d\n",i,m,rrotate(i,m)); 
	printf("%u������%d���ֵΪ%d",i,m,lrotate(i,m));
	return 0;
}
