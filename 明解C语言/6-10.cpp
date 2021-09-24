#include<stdio.h>
#define number 7
void intary_rcpy(int v1[],const int v2[],int n)
{
	int i;	
	for(i=0;i<n;i++){
		v1[i]=v2[n-1-i];
	}

}
int main(void){
	int i;
	int v1[number];
	int v2[number];
	for(i=0;i<number;i++){
	printf("v2[%d]:",i);scanf("%d",&v2[i]);
}
    intary_rcpy(v1,v2,number);
    puts("排列倒序结果如下。");
	for(i=0;i<number;i++)
	    printf("v1[%d]=%d\n",i,v1[i]);
	return 0; 
} 
