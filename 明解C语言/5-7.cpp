#include<stdio.h>
#define NUMBER 80 
int main(void)
{
	int i;
	int n;
	int x[n];
	printf("���ݸ�����");scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("%d�ţ�",i+1);scanf("%d",&x[i]);
	}
	putchar('{');
	for(i=0;i<n-1;i++){
	printf("%d,",x[i]);
	}
	printf("%d",x[n-1]);
	putchar('}');
	return 0;
}
