#include <stdio.h>
void main(){
    long num,a,b;
    long i,j,k;

    scanf("%x",&num);

    a = num & 0x0000FFFF;
    b = (num & 0xFFFF0000) >> 16;

    if(a % 2 == 0)
        printf("�ó��������ĵ�16λ����ʾ���з�������ż����\n");
    else
        printf("�ó��������ĵ�16λ����ʾ���з�������������\n");

    if(b % 2 == 0)
        printf("�ó��������ĸ�16λ����ʾ���з�������ż����\n");
    else
        printf("�ó��������ĸ�16λ����ʾ���з�������������\n");

    a = a << 16;
    i = (b & 0xFF00) >> 8;
    i = ((b & 0x00FF) << 8) + i;
    j = (a & 0x00FF0000) << 8;
    j = ((a & 0xFF000000) >> 8) + j;
    k = i + j;
    printf("��������Ϊ��%x",k);
}
