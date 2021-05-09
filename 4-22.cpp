#include<stdio.h>
int main(void)
{
	int i,j,n,m;
	puts("让我们来画一个长方形。");
	printf("一边：");scanf("%d",&n);
	printf("另一边：");scanf("%d",&m);
	int len,wid;
	len= (n>m) ? n : m;
	wid= (n<m) ? n : m;
	for(i=1;i<=wid;i++){
		for(j=1;j<=len;j++){
		putchar('*');
	}
		putchar('\n');
	}
	return 0;
 } 
