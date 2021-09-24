#include<stdio.h>
int main(void){
	float x1;
	int i;
	float x2=0.0;
	float sum1=0.0;
	float sum2=0.0;
	for(i=0;i<=100;i++){
		x2=i/100.0;
		printf("x1=%f    x2=%f\n",x1,x2);
		x1+=0.01;
		sum1+=x1; 
		sum2+=x2;
	}
	printf("sum1=%f   sum2=%f",sum1,sum2);
	return 0;
} 
