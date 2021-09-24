#include<stdio.h>
int main(void)
{
	int i,j,n;
	int tensu[2][4][3]={{{91,63,78},{67,72,46},{89,34,53},{32,54,34}},{{97,67,82},{73,43,46},{97,56,21},{85,46,35}}};
	puts("第一次考试     第二次考试"); 
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			for(n=0;n<2;n++){
				printf("%9d",tensu[n][i][j]);
			}
			putchar('\n');
		}
	}
	return 0; 
} 
