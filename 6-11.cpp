#include<stdio.h>
#define number 5
int search_idx(const int v[],int idx[],int key,int n){
	int i;
	int x=0;
	for(i=0;i<n;i++){
		if(v[i]==key){
		x++;
		idx[i]=v[i];
	}
    }
	return x; 
}
int main(void){
	int i;
	int v[number];
	int idx[number];
	int key;
	printf("���ҵ�ֵ��");scanf("%d",&key);
	for(i =0;i<number; i++) {
        printf("v[%d]=",i);
        scanf("%d",&v[i]);
    }
    int x=search_idx(v,idx,key,number);
    printf("��%d����ͬ��Ԫ��", x);
    return 0;
}
