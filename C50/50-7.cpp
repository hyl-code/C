#include<stdio.h>
int main(void){
	int n;
	int i;
	int a[n];
	int num=0;
	
	printf("����������������");scanf("%d",&n); 
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
		if(a[i]%2){
			num=1; 
		}
	}
	for(i=0;i<n;i++){
		num*=a[i];
	}
	printf("���������������ĳ˻�Ϊ��%d",num);
	return 0;
}

