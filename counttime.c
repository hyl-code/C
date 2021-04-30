#include <stdio.h>
#include <time.h> //���ʱ�亯��ͷ�ļ�
int isLeapYear(int year){
	int isLeapYear;
	if(year % 4 == 0 && year % 100 != 0)
		isLeapYear = 1;
	else if(year % 400 == 0)
		isLeapYear = 1;
	else
		isLeapYear = 0;
	return isLeapYear;
}  //�ж���һ���Ƿ�Ϊ����

int dayOfMonth(int month,int year){
	int day;
	int a = isLeapYear(year); //����������ֵ����a

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
	} //�ж��Ƿ�Ϊ�����Եó�2�·�����
	return day;
}//��������·ݵ�����

void main(){
	int year,mon,day;
	int month = 0;
	int d = 0,m = 0,s = 0;
	int i;
	int a,b;

	time_t t;
	struct tm * lt; //������ʱ��ת��Ϊ�����׼ʱ�䣬���ؽṹ��ָ�� �ɶ���struct tm *���������ս��
	time(&t);   //��ȡʱ��(��1970������)����t
	lt = localtime(&t); //תΪʱ��ṹ

	//lt->tm_year:��õ�ǰ���
	//lt->tm_mon����õ�ǰ�·�
	//lt->tm_mday:��õ�ǰ��
	//lt->tm_hour:��õ�ǰСʱ
	//lt->tm_min:��õ�ǰ����
	//lt->tm_sec:��õ�ǰ����

	printf("������������գ�");
	scanf("%d%d%d",&year,&mon,&day);

	if(year < (lt->tm_year+1900)){
		month = 12 - mon;
		for(a = mon;a <= 12;a++){
			d += dayOfMonth(a,year);
		}//��ó�����һ�������
	}

	for(i = (year + 1);i < (lt->tm_year + 1900);i++){
		int x = isLeapYear(i);

		if(x == 1)
			d += 366;
		else
			d += 365;
		month += 12;
	}//d���϶ȹ�����һ�������
     //month���϶ȹ�������һ�������

	month = month + lt->tm_mon;//month������һ����·�,�������������

	for(b = 1;b < lt->tm_mon;b++){
			d += dayOfMonth(b,year);
		}//��ý���ȹ�������

	d = d - day + lt->tm_mday;//�������������
	m = (d * 24 * 60) + lt->tm_min + ((lt->tm_hour) * 60);//�����������ٷ���
	s = ((d * 24 * 60) + lt->tm_min + ((lt->tm_hour) * 60)) * 60 + (lt->tm_sec);//�������������

	printf("����Ϊֹ����������%d��\n",month);
	printf("����Ϊֹ����������%d��\n",d);
	printf("����Ϊֹ����������%d��\n",m);
	printf("����Ϊֹ����������%d��\n",s);

}
