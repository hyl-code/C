#include<stdio.h>
int main(void){
	int n;
	printf("%4d%4d%4d\n",sizeof 1,sizeof(unsigned)-1,sizeof n+2); //1���ֽھ���Ϊ4����-1���ֽ�Ҳ��4�ټ�ȥ-1������ʾΪ3�������n+2Ϊ6�� 
	printf("%4d%4d%4d\n",sizeof +1,sizeof(double)-1,sizeof (n+2));//1���ֽ���4��double���ֽڳ���8,8-1��7���ѣ�n+2��������֮��ʹ��Ϊһ��ֵ��������4��
	printf("%4d%4d%4d\n",sizeof -1,sizeof((double)-1),sizeof (n+2.0));//1���ֽ���4����double-1��������֮�󣬾���double�����ֽ�Ϊ8���������Ҳ��8�� 
	return 0;
} 
