#include<stdio.h>
#define NUMBER 5
int min_of(const int v[],int n){
	int i;
	int min=v[0];
	for(i=0;i<n;i++){
		if(v[i]<min)
		min=v[i];
	}
	return min;
} 
int main(void){
	int i;
	int v[NUMBER];
	int min;
	printf("������%d������\n",NUMBER);
	for(i=0;i<NUMBER;i++){
	printf("v[%d]=",i);scanf("%d",&v[i]);
	} 
	min=min_of(v,NUMBER);
	printf("������СֵΪ��%d",min);
	return 0;
}
