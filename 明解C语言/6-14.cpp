#include<stdio.h>
int main(void){
	int i;
	static double a[6];
	for(i=0;i<6;i++){
		printf("a[%d]=%.1f\n",i,a[i]);
	}
	return 0;
}
