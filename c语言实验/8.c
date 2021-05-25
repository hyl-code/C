#include <stdio.h>
#define c 'A'
void Try(int n, int i);
int like[5][5] = {{0,0,1,1,0}, {1,1,0,0,1}, {0,1,1,0,1}, {0,0,0,1,0}, {0,1,0,0,1}};
int book[5] = {0, 0, 0, 0, 0};

void Try(int n, int i){
    int j, k;

    for(j = 0; j < 5; j++){
        if(like[i][j] == 1 && book[j] == 0){
            book[j] = i + 1;
            if(i == 4){
                n++;
                printf("第%d种分配方案为:\n",n);
                for(k = 0; k < 5; k++){
                    printf("    第%d本书分给%c\n", k + 1, book[k] + c - 1);
                }
                printf("\n");
            }else{
                Try(n, i + 1);
            }
            book[j] = 0;
        }
    }
}


void main(){
    int i = 0,n = 0;

    Try(n, i);
}
