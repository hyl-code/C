#include <stdio.h>
#include <time.h> //获得时间函数头文件
int isLeapYear(int year){
	int isLeapYear;
	if(year % 4 == 0 && year % 100 != 0)
		isLeapYear = 1;
	else if(year % 400 == 0)
		isLeapYear = 1;
	else
		isLeapYear = 0;
	return isLeapYear;
}  //判断这一年是否为闰年

int dayOfMonth(int month,int year){
	int day;
	int a = isLeapYear(year); //将函数返回值赋给a

	switch(month){
	case 1 :
	case 3 :
	case 5 :
	case 7 :
	case 8 :
	case 10 :
	case 12 : day = 31;  break;
	case 4 :
	case 6 :
	case 9 :
	case 11 : day = 30;  break;
	case 2 :
		if(a == 1)
			day = 29;
		else
			day = 28;
	} //判断是否为闰年以得出2月份天数
	return day;
}//返回这个月份的天数

void main(){
	int year,mon,day;
	int month = 0;
	int d = 0,m = 0,s = 0;
	int i;
	int a,b;

	time_t t;
	struct tm * lt; //将日历时间转化为世界标准时间，返回结构体指针 可定义struct tm *变量来接收结果
	time(&t);   //获取时间(从1970年起算)存于t
	lt = localtime(&t); //转为时间结构

	//lt->tm_year:获得当前年份
	//lt->tm_mon：获得当前月份
	//lt->tm_mday:获得当前日
	//lt->tm_hour:获得当前小时
	//lt->tm_min:获得当前分钟
	//lt->tm_sec:获得当前秒数

	printf("请输入你的生日：");
	scanf("%d%d%d",&year,&mon,&day);

	if(year < (lt->tm_year+1900)){
		month = 12 - mon;
		for(a = mon;a <= 12;a++){
			d += dayOfMonth(a,year);
		}//获得出生那一年的天数
	}

	for(i = (year + 1);i < (lt->tm_year + 1900);i++){
		int x = isLeapYear(i);

		if(x == 1)
			d += 366;
		else
			d += 365;
		month += 12;
	}//d加上度过完整一年的天数
     //month加上度过了完整一年的月数

	month = month + lt->tm_mon;//month加上这一年的月份,获得已生活月数

	for(b = 1;b < lt->tm_mon;b++){
			d += dayOfMonth(b,year);
		}//获得今年度过的天数

	d = d - day + lt->tm_mday;//获得已生活天数
	m = (d * 24 * 60) + lt->tm_min + ((lt->tm_hour) * 60);//获得已生活多少分钟
	s = ((d * 24 * 60) + lt->tm_min + ((lt->tm_hour) * 60)) * 60 + (lt->tm_sec);//获得已生活秒数

	printf("迄今为止你已生活了%d月\n",month);
	printf("迄今为止你已生活了%d天\n",d);
	printf("迄今为止你已生活了%d分\n",m);
	printf("迄今为止你已生活了%d秒\n",s);

}
