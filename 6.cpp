#include<stdio.h>
int main(void){
	int a[100];
	int b,c;
	int n,i,j;
	
	printf("请输入绝对值排序的整数个数：");scanf("%d",&n);
	for(b=0;b<n;b++){
		scanf("%d",&a[b]);
	    if(a[b]<0){
		    a[b]=-a[b];
	}
	}
	for(j=0;j<n;j++){
		int k; 
	    for(c=0;c<n-1;c++){
		    if(a[c+1]<a[c]){
			k=a[c+1];
			a[c+1]=a[c];
		    a[c]=k;
		    }
	   }
	}
	puts("排序结果："); 
	for(i=n-1;i>=0;i--){
		printf("%4d",a[i]);
	}
	return 0;
}

