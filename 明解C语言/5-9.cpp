#include<stdio.h>
#define NUMBER 80 
int main(void)
{
	int i,j;
	int num;
	int tensu[NUMBER];
	int bunpu[11]={0};
	printf("������ѧ��������");
	do{
		scanf("%d",&num);
		if(num<1 || num>NUMBER)
		printf("\a������1~%d������",NUMBER); 
	}while(num<1 ||num>NUMBER);
	printf("������%d�˵ķ�����\n",num);
	for(i=0;i<num;i++){
		printf("%2d�ţ�",i+1);
		do{
			scanf("%d",&tensu[i]);
			if(tensu[i]<0 || tensu[i]>100)
			printf("\a������1~100������");
		} while(tensu[i]<0 || tensu[i]>100);
		bunpu[tensu[i]/10]++;
	}
	puts("\n---�ֲ�ͼ---");
	int max=bunpu[0];
	for(i=1;i<11;i++){
		if(bunpu[i]>max)
	    max=bunpu[i];
	}
	for(;max>0;max--){
		for(j=0;j<=10;j++){
			if(bunpu[j]>=max)
			printf("   *");
			else
			printf("    ");
	}
	putchar('\n');
	}
	putchar('\n'); 
	for(i=0;i<=10;i++){
    	printf("----");
    } 
    	putchar('\n'); 
	for(i=0;i<=10;i++){ 
	    printf("%4d",i*10);
	    } 
	return 0;
	}
