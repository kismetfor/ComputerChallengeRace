#include <stdio.h>
#define  M 13
int main()
{
    /********** Begin **********/
    int days[M] = {0,31,28,31,30,31,30,31,31,30,31,30,31};    //按人的习惯从1开始
    int year,month,day;
    scanf("%d %d %d", &year, &month, &day);
    if((year%4 == 0 && year%100 != 0) || year%400 == 0){
        days[2] = 29;
    }
    for(int i=month-1; i>0; i--){
        day += days[i];
    }
    printf("这一天是这一年的第%d天\n", day);

    /********** End **********/
    return 0;
}
