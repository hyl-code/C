#include<stdio.h>
int main(void){
	int n;
	int i;
	int a[n];
	int num=0;
	
	printf("请输入整数个数：");scanf("%d",&n); 
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
		if(a[i]%2){
			num=1; 
		}
	}
	for(i=0;i<n;i++){
		num*=a[i];
	}
	printf("它们中所有奇数的乘积为：%d",num);
	return 0;
}

