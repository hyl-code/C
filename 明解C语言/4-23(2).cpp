#include<stdio.h>
int main(void) 
{
    int  i,j,len;
    puts("生成直角在右上方的等腰三角形。");
	printf("短边：");scanf("%d",&len);
	for(i=len;i>=1;i--){
		for(j=1;j<=len-i;j++)
		putchar(' ');
		for(j=1;j<=i;j++)
		putchar('*');
	putchar('\n');
	} 
	return 0;
}
 
