#include<stdio.h>
int main(void)
{
	int i,j;
	double x,y;
	int a[6][1];
    int b[6][1];
    int sum[6][1];    
	puts("请依次输入语文和数学的成绩，用空格分隔。");
    puts("输入分数：");
    puts("语文："); 
	for(i=0;i<6;i++){
	for(j=0;j<1;j++){
	scanf("%d",&a[i][j]);
	} 
	}
	for (i=0;i<6;i++) {
	    for (j=0;j<1;j++) {
		printf("%6d", a[i][j]);
	    x+=a[i][j];
        }
    }
    putchar('\n');
	printf("语文的总分是%6.2f,平均分是:%6.2f",x,x/6);
	putchar('\n');
	puts("数学："); 
	for(i=0;i<6;i++){
	    for(j=0;j<1;j++){
	    scanf("%d",&b[i][j]);
	} 
	}
	for(i=0;i<6;i++){
		for(j=0;j<1;j++){
			printf("%6d",b[i][j]);
			y+=b[i][j];
		}
	}
	putchar('\n');
	printf("数学的总分是%6.2f,平均分是：%6.2f",y,y/6);
	putchar('\n'); 
	for(i=0;i<6;i++){
		for(j=0;j<1;j++){
		sum[i][j]=a[i][j]+b[i][j];
    }
	}
	putchar('\n');
	puts("总分：");
	for(i=0;i<6;i++){
		for(j=0;j<1;j++){
			printf("%6d",sum[i][j]);
		}
	}
	putchar('\n');
	puts("平均分：");
	for(i=0;i<6;i++){
		for(j=0;j<1;j++){
			printf("%6.2f",(double)sum[i][j]/2);
		}
	} 
	return 0;
 } 
