#include<stdio.h>
int main(void){
	int a,b;
	int c;
	
	scanf("%d %d",&a,&b);
	c=a%b;
	printf("%d %% %d=%d",a,b,c);
	puts("\n");
	printf("%d %% %d=%d",a,b,c);
	return 0;
}
