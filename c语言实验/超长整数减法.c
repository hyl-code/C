#include <stdio.h>
#include <conio.h>
#include <string.h>

#define N 20

void beep();
void GetNumberStr(char s[]);
void SubNumberStr(char a[],char b[],char c[]);
char SubChar(char ch1,char ch2);
void LeftTrim(char str[]);

int tag = 0;

int main(void){
	char a[N + 1] = {0},b[N + 1] = {0},c[N + 1] = {0};
	int tag;

	printf("a=");

	while(strlen (a) == 0)
		GetNumberStr(a);
	printf("\nb=");
	while(strlen (b) == 0)
		GetNumberStr(b);
    printf("\n");

    if(strcmp(a, b) == 0){
        c[0] = '0';
    }else{
        SubNumberStr(a, b, c);
    }
    printf("a-b=%s \n",c);
}

void GetNumberStr(char s[]){
	int i =0;
	char ch;

	while(1){
		ch = getch();
		if(ch == '\r'){
            break;
		}
		if(ch == '\b'){
			if(i > 0){
				printf("%c %c",ch,ch);
				i--;
			}else{
				beep();
			}
            continue;
		}
        if(ch < '0' || ch > '9'){
            beep();
            continue;
        }
        if(i < N){
            printf("%c",ch);
            s[i++] = ch;
        }else{
            beep();
        }
    }
	s[i] = '\0';
}

void beep(){
	printf("\07");
}

//计算两个数字字符串之差，放在c中
void SubNumberStr(char a[],char b[],char c[]){
	int i,j,k;

	memset(c,' ',N);
	i = strlen(a) - 1;
	j = strlen(b) - 1;
	k = N;

    while(i >= 0 && j >= 0){
        c[k--] = SubChar(a[i--],b[j--]);
    }
    while(i >= 0){
        c[k--] = SubChar(a[i--],'0');
    }
    if(tag == 1){
        c[k] = a[i] - b[j] - tag;
    }
    c[N + 1] = '\0';
	LeftTrim(c);
}

char SubChar(char ch1,char ch2){
	char ch;

	ch = (ch1 - ch2) - tag;
	if(ch < 0){
		tag = 1;
        return (ch + 0x30 + 10);
	}else{
		tag = 0;
		return (ch + 0x30);
	}
}

void LeftTrim(char str[]){
	int i,j;

	for(i = 0;str[i] == ' ';i++){

	}

	for(j = i;str[j] == '0';j++){

	}
	strcpy(str, str + j);

}
