#include<stdio.h>
int main(void)
{
	int i,j,n,m;
	puts("����������һ�������Ρ�");
	printf("һ�ߣ�");scanf("%d",&n);
	printf("��һ�ߣ�");scanf("%d",&m);
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
