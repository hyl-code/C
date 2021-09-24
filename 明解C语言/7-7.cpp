#include<stdio.h>
int main(void){
	float a;
	double b;
	long double c;
	puts("依次输入三个浮点数：");
	scanf("%f %f %lf",&a,&b,&c);
	printf("float型：%f，double型：%f，long double型：%lf",a,b,c);
	return 0;
}

