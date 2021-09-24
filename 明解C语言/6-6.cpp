#include<stdio.h>
void alert(int n)
{
	int x;
	for(x=1;x<=n;x++){
		putchar('\a');
	}
 } 
int main(void)
{
	int n;
	printf("请输入发出响铃次数：");scanf("%d",&n);
	alert(n);
	return 0;
}
