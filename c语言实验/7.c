#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 80

void getWords(char a[],char b[]);
void sort(char word[N][20],int n[],int k);

int j = 0;

void getWords(char a[N],char b[N]){
    int i = 0;

    while(a[i] != ' ' && a[i] != ',' && a[i] != '.'){
        b[i] = tolower(a[i]);
        i++;
        j++;
    }

    b[i] = '\0';

    while(1){
        if(a[i] != ' ' && a[i] != ',' && a[i] != '.')
            break;
        j++;
        i++;
    }
}

void sort(char word[N][20],int n[],int k){
    int a,b,temp;
    int t = 0;
    char str[N];

    for(a = 0;a < k - 1;a++){
        for(b = 0;b < k - 1 - a;b++){
            if(word[N][b] < word[N][b + 1]){
                temp = n[b];
                n[b] = n[b + 1];
                n[b + 1] = temp;
                t = 1;
                strcpy(str,word[b]);
                strcpy(word[b],word[b + 1]);
                strcpy(word[b + 1],str);
            }
        }
        if(t == 0)
            break;
    }
    for(a = 0; a < k; a++){
        printf("%s[%d]\n",word[a],n[a] + 1);
    }
}

void main(){
    char a[N],b[N];
    char str[N],word[N][20];
    int i = 0,k,t,len;
    int n[N] = {0};

    gets(a);
    len = strlen(a);
    strcpy(b,a);
    while(1){
        getWords(b,str);
        strcpy(word[i],str);
        strcpy(b,a + j);

        for(k = 0;k < i;k++){
            t = 0;
            if(strcmp(word[i],word[k]) == 0){
                n[k] += 1;
                t = 1;
                break;
           }
        }

        if(t == 0)
            i++;

        if(j >= len)
            break;
    }
    sort(word,n,i);

}
