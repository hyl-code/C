#include<stdio.h>
int num(int i){
	int j;
	int a=0;
	for(j=1;j<=i;j++){
		if(i%j==0)
		a++;
	}
	if(a>2){
	return 1;
	}
	return 0;
}
int main(void){
	int i;
	int a=0;
	int b=0;
	
	for(i=1;i<=100;i++){
	    if(num(i)==0){
	    	a++;
	    	b++;
	    	printf("%3d",i);
	    }
		if (b==5){
           printf("\n");
           b=0;
        }
		}
	return 0;
} 
