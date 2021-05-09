#include<stdio.h>
int main(void)
{
	int month;
	printf("ÇëÊäÈëÔÂ·İ:");
	scanf("%d",&month);
	switch(month){
	case 3 :
	case 4 : 
	case 5 :puts("´º¼¾¡£"); break;
	case 6 :
	case 7 :
	case 8 :puts("ÏÄ¼¾¡£"); break;
	case 9 :
	case 10: 
	case 11 :puts("Çï¼¾¡£"); break; 
	case 12 :
	case 1 :
	case 2 :puts("¶¬¼¾¡£"); break;   
	default:puts("²»´æÔÚ£¡£¡"); break; 
	}
	return 0;
 } 
