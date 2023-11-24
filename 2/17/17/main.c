#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[10];
    int chinese;
    int math;
    int english;
    int sum;
} Stu;

int n;
Stu a[100];

void init(void) {
    for (int i = 0; i < 100; i++)
    {
        a[i].chinese = 999;
        a[i].math = 999;
        a[i].english = 999;
        a[i].sum = 999;
    }
}

int compare_chinese(const void* a, const void* b) {
    return ((Stu*)a)->chinese - ((Stu*)b)->chinese;
}

int compare_math(const void* a, const void* b) {
    return ((Stu*)a)->math - ((Stu*)b)->math;
}

int compare_english(const void* a, const void* b) {
    return ((Stu*)a)->english - ((Stu*)b)->english;
}

int compare_sum(const void* a, const void* b) {
    return ((Stu*)a)->sum - ((Stu*)b)->sum;
}

void lower_chinese(void) {
    qsort(a, sizeof(a) / sizeof(a[0]), sizeof(a[0]), compare_chinese);
    printf("lower chinese:\n");
    for (int i = 0; i < n; i++)
    {
        if (a[i].chinese == a[0].chinese) {
            printf("%s(%d)\n", a[i].name, a[i].chinese);
        }
    }
}

void lower_math(void) {
    qsort(a, sizeof(a) / sizeof(a[0]), sizeof(a[0]), compare_math);
    printf("lower math:\n");
    for (int i = 0; i < n; i++)
    {
        if (a[i].math == a[0].math) {
            printf("%s(%d)\n", a[i].name, a[i].math);
        }
    }
}

void lower_english(void) {
    qsort(a, sizeof(a) / sizeof(a[0]), sizeof(a[0]), compare_english);
    printf("lower english:\n");
    for (int i = 0; i < n; i++)
    {
        if (a[i].english == a[0].english) {
            printf("%s(%d)\n", a[i].name, a[i].english);
        }
    }
}


void lower_sum(void) {
    qsort(a, sizeof(a) / sizeof(a[0]), sizeof(a[0]), compare_sum);
    printf("lower score:\n");
    for (int i = 0; i < n; i++)
    {
        if (a[i].sum == a[0].sum) {
            printf("%s(%d)\n", a[i].name, a[i].sum);
        }
    }
}

void test(void) {
    init();
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", a[i].name, &a[i].chinese, &a[i].math, &a[i].english);
        a[i].sum = a[i].chinese + a[i].math + a[i].english;
    }
    lower_chinese();
    lower_math();
    lower_english();
    lower_sum();
}

int main() {
    test();
    return 0;
}
