#include <stdio.h>
void main(){
    unsigned short a[4];
    unsigned short max,min;
    int i;

    for(i = 0;i < 4;i++){
        scanf("%hu",&a[i]);
    }
    max = a[0];
    min = a[0];
    for(i = 0;i < 4;i++){
        if((int)a[i] >= (int)max)
            max = a[i];
        if(a[i] <= (int)min)
            min = a[i];
    }
    printf("�����޷���������С��������Ϊ��%hu",max - min);
}
