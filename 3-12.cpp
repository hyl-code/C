#include<stdio.h>
int main(void)
{
	int no;
	printf("������һ��������");
	scanf("%d",&no);
	switch(no%2){
	case 0 :puts("������Ϊż��"); break;
	case 1 :puts("������Ϊ����"); break;
	} 
	return 0;
 } 
