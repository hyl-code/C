#include<stdio.h>
int main(void){
	int n,m;
	int i,j,k;
	int sum1=0;
	int sum2=0;
	int a[50][5];
	double b[50],c[5];
	double v;
	
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<m;j++){
		for(i=0;i<n;i++){
			c[j]+=a[i][j];
		}
	} 
		for(j=0;j<m;j++){
			c[j]/=n;
		}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		if(a[i][j]>=c[j]){
		k++;
		break;
    	}
	    }
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[i]+=a[i][j];
		}
		b[i]/=m;
	}
    for(i=0;i<n-1;i++) {
			printf("%.2f",b[i]);
			putchar(' '); 
		}
	printf("%.2f\n",b[n-1]);
		for (i=0;i<m-1;i++) {
			printf("%.2f",c[i]);
			putchar(' '); 
		}  
	printf("%.2f\n",c[m-1]);
	printf("%d",k);
	return 0; 
}
