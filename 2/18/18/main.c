#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//输入成绩 语数外
//找出总分最低 单科最低

int n;

typedef struct {
 char name[20];
 int chinese;
 int math;
 int english;
 int sum_score;
} Stu;

Stu a[1000];

void init(void) {
 for (int i = 0; i < 5; i++)
 {
  a[i].chinese = 999;
  a[i].math = 999;
  a[i].english = 999;
  a[i].sum_score = 999;
 }
}

int compare_chinese(const void* a, const void* b) {
    return ((Stu*)a)->chinese - ((Stu*)b)->chinese;
}

void input(void) {
 scanf("%d", &n);
 for (int i = 0; i < n; i++)
 {
  scanf("%s %d %d %d", a[i].name, &a[i].chinese, &a[i].math, &a[i].english);
  a[i].sum_score = a[i].chinese + a[i].math + a[i].english;
 }
}

void output(void) {
 qsort(a, sizeof(a) / sizeof(a[0]), sizeof(a[0]), compare_chinese);
 printf("lower chinese:\n");
 printf("%s(%d)", a[0].name, a[0].chinese);
 printf("lower math:\n");
 printf("lower english:\n");
 printf("lower score:\n");
}

void test(void) {
 init();
 input();
 output();
}

int main() {
 test();

 return 0;
}
