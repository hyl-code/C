#include<stdio.h>
int main(void){
	int n;
	printf("%4d%4d%4d\n",sizeof 1,sizeof(unsigned)-1,sizeof n+2); //1的字节就是为4，而-1的字节也是4再减去-1所以显示为3，最后是n+2为6； 
	printf("%4d%4d%4d\n",sizeof +1,sizeof(double)-1,sizeof (n+2));//1的字节是4，double的字节长是8,8-1是7，把（n+2）括起来之后使其为一个值，所以是4；
	printf("%4d%4d%4d\n",sizeof -1,sizeof((double)-1),sizeof (n+2.0));//1的字节是4，把double-1都括起来之后，就是double类型字节为8，所以最后也是8； 
	return 0;
} 
