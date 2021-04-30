#include<stdio.h>
int main(void){
	float a,b;
	float c;
	
	scanf("%f %f",&a,&b);
	c=a/b;
	printf("%5.4f",c);//m代表小数结果总共含有的数字个数，n代表小数点后数字个数。 
	return 0;
}
