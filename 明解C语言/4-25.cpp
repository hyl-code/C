#include <stdio.h>

int main(void)
{
    int i,j,n;
    puts("让我们来画一个向下的金字塔");
    printf("金字塔有几层：");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for(j=0;j<i-1;j++){
            putchar(' ');
        }
        for(j=0;j<(n-i)*2+1;j++){
            printf("%d",i%10);
        }    
        for(j=0;j<i-1;j++){
            putchar(' ');
        }
        putchar('\n');
     }
     return 0;
}
