#include<stdio.h>
#define number 7
void rev_intary(int v[],int n){
	int i;
	for(i=0;i<n/2;i++){
		int temp=v[i];
		v[i]=v[n-1-i];
		v[n-1-i]=temp;
	}
} 
int main(void){
	int i;
	int v[number];
	for(i=0;i<number;i++){
		printf("v[%d]:",i);scanf("%d",&v[i]);
	}
	rev_intary(v,number);
	puts("倒序排列结果如下。\n");
	for(i=0;i<number;i++){
	printf("v[%d]=%d\n",i,v[i]);
}
	return 0;
}
