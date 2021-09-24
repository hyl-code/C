#include<stdio.h>
void mat_add(const int a[4][3],const int b[4][3],int c[4][3]){
	int x,y;
	for(x=0;x<4;x++)
		for(y=0;y<3;y++){
			c[x][y]=a[x][y]+b[x][y];
		}
		putchar('\n'); 
} 
void mat_print(const int m[4][3]){
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++)
		printf("%4d",m[i][j]);
		putchar('\n');
	}
	putchar('\n');
}
int main(void){
	int tensu[2][4][3] = { { { 91, 63, 78 },{ 67, 72, 46 },{ 89, 34, 53 },{ 32, 54, 34 } } ,
						   { { 97, 67, 82 },{ 73, 43, 46 },{ 97, 56, 21 },{ 85, 46, 35 } } };
	int sum[4][3];
	mat_add(tensu[0], tensu[1], sum);
	puts("第一次考试的分数\n");mat_print(tensu[0]);
	puts("第二次考试的分数\n");mat_print(tensu[1]);
	puts("总分\n");mat_print(sum);
	return 0;
}
