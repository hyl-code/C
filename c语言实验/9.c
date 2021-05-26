#include <stdio.h>
#include <string.h>

void get(char *str, int a, int len);
void insert(char *str_a, char *str, int spot);
void del(char *str, int a, int len);

void get(char *str, int a, int len){
    int i;

    strcpy(str, str + a - 1);
    for(i = 0;i < len;i++){
        str++;
    }
    *str = '\0';
    str -= len;
    printf("������ݣ�%s\n",str);
}

void insert(char *str_a, char *str, int spot){
    int i;
    char *str_t;

    strcpy(str_t, str + spot);
    for(i = 0; i < spot; i++){
        *str++;
    }
    *str = '\0';
    strcat(str, str_a);
    strcat(str, str_t);
    str -= spot;
    printf("�����%s\n",str);
}

void del(char *str, int a, int len){
    int i = 0;
    char *str_t;

    strcpy(str_t, str + a + len - 1);
    for(i = 0; i < a - 1; i++){
        *str++;
    }
    *str = '\0';
    strcat(str, str_t);
    str -= (a - 1);
    printf("ɾ����%s\n",str);
}

void main(){
    int key;
    char str[80], str_t[80];
    int a,len, flag = 1;

    while(flag){
        printf("������һ������ѡ����Ҫִ�еĲ�����1��ȡ�Ӵ���2�����룻3��ɾ����0���˳�����");
        scanf("%d",&key);

        switch(key){
            case 1:
                printf("�������ַ�����");
                scanf("%s",str);
                printf("�������Ӵ���ʼλ�ã�");
                scanf("%d",&a);
                printf("�������Ӵ����ȣ�");
                scanf("%d",&len);
                get(str, a, len);
                continue;
            case 2 :
                printf("������Դ�ַ�����");
                scanf("%s",str_t);
                printf("������Ŀ���ַ�����");
                scanf("%s",str);
                printf("����������ָ��λ�ã�");
                scanf("%d",&a);
                insert(str_t, str, a);
                continue;
            case 3:
                printf("�������ַ�����");
                scanf("%s",str);
                printf("�������ɾ���Ӵ�����ʼλ�ã�");
                scanf("%d",&a);
                printf("�������ɾ���Ӵ��ĳ��ȣ�");
                scanf("%d",&len);
                del(str, a, len);
                continue;
            case 0:
                flag = 0;
        }
    }
}
