#include<stdio.h>
int main(void){
	int n;
	int i;
	
	scanf("%d",&n); 
	i=n/10;
	switch(i){
	case 10:
	case 9 :putchar('A'); 
	        break;
	case 8 :
	case 7 :
	case 6 :putchar('B'); 
	        break;
	case 5 :
	case 4 :
	case 3 :
	case 2 : 
	case 1 :
	case 0 :putchar('C'); 
	        break;
	    }
	return 0;
} 
