#include <stdio.h>
int main(void)
{
	int x,y;
	int a;
	printf("请输入两个整数。"); 
	printf("整数x：");scanf("%d",&x);
	printf("整数y：");scanf("%d",&y);
	a=x*100/y;
	printf("x的值是y的%d%%。\n",a);
	return 0; 
}
