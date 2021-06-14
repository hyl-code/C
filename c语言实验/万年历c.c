#include <stdio.h>
int day(int y);

int day(int y)
{
    if ((y % 4 == 0) && (y % 100 != 0) || y % 400 == 0)
        return 366;
    else
        return 365;
}

int main(void){
    int year;
    int i, j, k;
    int start;
    int sum = 0,cal;
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    printf("请输入年份距2000年的年数：");
    scanf("%d",&year);
    year += 2000;

    for (i = 2000; i < year; i++)
        sum += day(i);
    cal = (sum + 1) % 7;

    if (day(year) == 366)
        days[1] = 29;

    printf("%d年日历如下:\n",year);

    for (i = 0; i < 12; i++)
    {
        printf("         %d月          \n", i + 1);
        printf("  7  1  2  3  4  5  6  \n");
        printf("=======================\n");
        start = 1;
        for (j = 0; j < cal; j++)
            printf("   ");
        while (start <= days[i])
        {
            printf("%3d", start);
            start++;
            cal = (cal + 1) % 7;
            if (cal % 7 == 0)
                printf("\n");
        }
        printf("\n\n");
    }



}
