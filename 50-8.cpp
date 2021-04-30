#include<stdio.h>
int main(void){
	int n,m;
	int i;
	int a[100];
	int min,max;
	int sum=0;
	double v;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		a[i]=m;
	}
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++){
		if(a[i]<min)
		min=a[i];
		if(a[i]>max)
		max=a[i];
	}
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	v=(double)(sum-min-max)/(n-2);
	printf("选手得分为：%.2f",v);
	return 0;
} 
