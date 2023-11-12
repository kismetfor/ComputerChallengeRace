#include<stdio.h>
#include<stdlib.h>

typedef struct date
{
    int year;
    int month;
    int day;
}DATE;

typedef struct student
{
    int num;
    char name[20];
    char sex;
    DATE birthday;
    float score;
}STUDENT;

void input(STUDENT *s);
void output(STUDENT s);

int main()
{
    STUDENT * p1, * p2, * p3;
    /**********申请3个学生数据所需内存空间 **********/
    /********** Begin **********/
    p1 = (STUDENT *)malloc(sizeof(STUDENT));
    p2 = (STUDENT *)malloc(sizeof(STUDENT));
    p3 = (STUDENT *)malloc(sizeof(STUDENT));
    /********** End **********/
    
    /**********输入输出3个学生数据信息并输出 **********/
    /********** Begin **********/
    input(p1);
    input(p2);
    input(p3);
    
    output(*p1);
    output(*p2);
    output(*p3);
    /********** End **********/
    
    free(p1);        //释放这3个所占堆内存
    free(p2);
    free(p3);
    return 0;
}

void input(STUDENT *s)
{
    /********** Begin **********/
    scanf("%d %s %c %d%d%d %f", &s->num, s->name, &s->sex, &s->birthday.year, &s->birthday.month, &s->birthday.day, &s->score);
    /********** End **********/
}

void output(STUDENT s)
{
    /********** Begin **********/
    printf("学号:%d\t姓名:%s\t性别:%c\t出生日期:%d-%d-%d\t成绩:%.1f\n", s.num, s.name, s.sex, s.birthday.year, s.birthday.month, s.birthday.day, s.score);
    /********** End **********/
}

