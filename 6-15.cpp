#include<stdio.h>
static int n;
void put_count(){
	n++;
} 
int main(void){
	put_count();
	printf("put_count:��%d��\n",n);
	put_count();
	printf("put_count:��%d��\n",n);
	put_count();
	printf("put_count:��%d��\n",n);
	return 0; 
}
