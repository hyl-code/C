#include<stdio.h>
int main(void)
{
	int no,i;
	printf("ÕıÕûÊı£º");scanf("%d",&no);
	i=1;
	while(i<=no){
		if(i%2)
		printf("+");
		else
		printf("-");
		i++; 
	}
	return 0; 
}
