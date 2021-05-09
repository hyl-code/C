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
	printf("请输入整型数、开始移动的位数及要操作的位个数："); 
	scanf("%u %d %d",&x ,&pos,&n);
	printf("将第%d位至第%d位设为1后的值%u\n",pos,pos+n-1,set_n(x,pos,n));
	printf("将第%d位至第%d位设为0后的值%u\n",pos,pos+n-1,reset_n(x,pos,n));
	printf("将第%d位至第%d位取反后的值%u",pos,pos+n-1,inverse_n(x,pos,n)); 
	return 0;
}
