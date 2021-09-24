#include<stdio.h>
void mat_mul(const int a[4][3],const int b[3][4],int c[4][4]){
	int i,j,k;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			for(k=0;k<3;k++){
				c[i][j]=a[k][i]*b[j][k]; 
			}
		}
	}
} 
int main(void){
	int a[4][3];
	int b[3][4];
	int c[4][4];
	int i,j,k,x,y;
	printf("输入4*3个数以空格隔开：");
	for(i=0;i<4;i++){
		for(k=0;k<3;k++)
		scanf("%4d",&a[i][k]);
	}
	printf("输入3*4个数以空格隔开：");
	for(i=0;i<3;i++){
		for(k=0;k<4;k++)
		scanf("%4d",&b[i][k]);
	}
	mat_mul(a,b,c);
	for(x=0;x<4;x++){
		for(y=0;y<4;y++){
		printf("%4d",c[x][y]);
	}
	putchar('\n');
	}
	return 0;
}
