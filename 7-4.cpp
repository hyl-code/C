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
	printf("请输入整型数及要操作的位数："); 
	scanf("%u %u",&x,&pos);
	printf("将第%d位设为1后的值%d\n",pos,set(x,pos));
	printf("将第%d位设为0后的值%d\n",pos,reset(x,pos));
	printf("将第%d位取反后的值%d",pos,inverse(x,pos)); 
	return 0;
}
