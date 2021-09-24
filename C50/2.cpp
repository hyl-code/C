#include<stdio.h>
int main(void){
	int a,b;
	int x,y;
	
	printf("输入两门课的成绩:");scanf("%d %d",&a,&b);
	if(0<=a&&a<=100&&0<=b&&b<=100){
		x=a/20;
		y=b/20;
		switch(x){ 
		case 3 :
		case 4 :
		case 5 : 
		switch(y){ 
		case 3 :
		case 4 :
		case 5 :
		printf("it is pass.");break;
		} 
		default: 
		printf("it is not pass.");
		break;
}
}
	else
	printf("it is error.");
	return 0;
} 
