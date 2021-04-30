#include<stdio.h>
int main(void){
    int a,b,c;
    
	printf("请输入三个数："); scanf("%d %d %d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b||a==c||b==c){
			if(a==b&&b==c)
			puts("1");
			else
			puts("2");
		}
		else
		puts("3");

	} 
	else
	puts("0");
	
	return 0; 
} 
