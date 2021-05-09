#include<stdio.h>
static int n;
void put_count(){
	n++;
} 
int main(void){
	put_count();
	printf("put_count:第%d次\n",n);
	put_count();
	printf("put_count:第%d次\n",n);
	put_count();
	printf("put_count:第%d次\n",n);
	return 0; 
}
