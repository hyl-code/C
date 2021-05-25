#include <stdio.h>
void main(){
    int a[20],b[10];
    int i,j,k,t,t2;

    for(i = 0;i < 10;i++)
        scanf("%d",&a[i]);
    for(i = 0;i < 10;i++)
        scanf("%d",&b[i]);

    //冒泡排序
    for(i = 0;i < 9;i++){
        for(j = 0;j < 10;j++){
            if(a[j] < a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for(i = 0; i < 10;i++){
        printf("%4d",a[i]);
    }
    printf("\n");

    //选择排序
    for(i = 0;i < 10;i++){
        k = i;
        for(j = i + 1;j < 10;j++){
            if(b[k] < b[j])
                k = j;
        }
        if(k != i){
            t = b[i];
            b[i] = b[k];
            b[k] = t;
        }
        printf("%4d",b[i]);
    }
    printf("\n");

    for(i = 0;i < 10;i++){
        a[i+10] = b[i];
    }

    for(i = 0;i < 20;i++){
        k = i;
        for(j = i + 1;j < 20;j++){
            if(a[k] < a[j]){
                k = j;
            }
        }
        if(k != j){
            t = a[i];
            a[i] = a[k];
            a[k] = t;
        }
        printf("%4d",a[i]);
    }
}
