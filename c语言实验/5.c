#include <stdio.h>
void main(){
    unsigned int n,m,num;
    int i,j,k;

    printf("请输入一个自然数:");
    scanf("%d",&num);
    n = num * num * num;
    for(i = 1;i < (n / 2);i += 2){
        m = 0;
        for(j = i;j < i + 2 * num ;j += 2){
            m += j;
        }
        if(m == n)
            break;
    }

    printf("%d^3 = ",num);
    for(i = j - num * 2;i < j - 2;i += 2){
        printf("%d+",i);
    }
    printf("%d",j - 2);
}
