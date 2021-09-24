#include<stdio.h>
int main(void){
	int date1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int date2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int y,m,d;
	int i;
	int day=0;
	
	scanf("%d/%d/%d",&y,&m,&d);
	if(m>1) {
	    if((y%4==0&&y%100!=0)||y%400==0){
	    	for(i=1;i<m;i++){
			day+=date2[i-1];
	    	}
    	}
    	else{
		    for(i=1;i<m;i++){
			day+=date1[i-1];
	    	}
        }
    	}
	day=day+d;
	printf("该日期是该年的第%d天。",day); 
	return 0;
	}
