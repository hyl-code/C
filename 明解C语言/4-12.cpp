#include<stdio.h>
int main(void)
{
	int no,x;
	int i; 
	printf("������һ����������");
	scanf("%d",&no);
	i=0; 
	x=no;
	while(no>0){
		no/=10;
		i++; 
	} 
	printf("%d��λ����%d",x,i);
	return 0;
 } 
