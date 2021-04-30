#include<stdio.h>
int main(void){
    unsigned int n;
	int T[n+1];
	int i;
	
	printf("n=");scanf("%u",&n);
	T[0]=0;
	T[1]=1;
	T[2]=1;
	if(n>2){
		T[3]=0;
		for(i=3;i<=n;i++)
		    T[i]=T[i-1]+T[i-2]+T[i-3];
    }
	printf("%d",T[n]);
	return 0;
} 
