#include<stdio.h>
int main(void){
	float a;
	double b;
	long double c;
	printf("float length=%d\ndoble length=%d\nlong double length=%d",sizeof(a),sizeof(b),sizeof(c));
	return 0;
}
