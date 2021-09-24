#include<stdio.h>
int main(void)
{
	int i,j,k,x,y;
	int a[4][3];
	int b[3][4];
	int c[4][4];
	printf("输入4*3个数,以空格隔开：\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	printf("输入3*4个数,以空格隔开：\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++)
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		c[i][j]=0;
			for(k=0;k<4;k++)
			c[i][j]=a[i][k]*b[k][j];
		}
	} 
	for(x=0;x<4;x++){
		for(y=0;y<4;y++)
		printf("%4d",c[x][y]);
		printf("\n");
	}
	return 0;
 } 
