#include <stdio.h>
void main(){
    int num;
    int a[4],i,j;
    int temp;

    scanf("%d",&num);
    temp = num;

    printf("������ʾΪ��");
    for(i = 0;i < 4;i++){
        a[i] = temp % 10;
        temp = temp / 10;
        printf("%d",a[i]);
    }
    printf("\n");

    for(i = 0;i < 4;i++){
        for(j = 0;j < 3;j++){
            if(a[j] < a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("���������Ϊ��");
    for(i = 0;i < 4;i++){
        printf("%d",a[i]);
    }
    printf("\n");

    printf("�����С����Ϊ��");
    for(i = 3;i >= 0;i--){
        printf("%d",a[i]);
    }
    printf("\n");

}

