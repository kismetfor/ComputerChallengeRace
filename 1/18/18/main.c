#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1001

// 定义一个取两数较大值的函数
int max(int a, int b) {
    return a > b ? a : b;
}

// 定义一个取两数较小值的函数
int min(int a, int b) {
    return a < b ? a : b;
}

// 计算在给定凌乱度限制下需要的替换操作次数
int count_operations(int a[], int n, int limit) {
    int operations = 0;
    for (int i = 1; i < n; ++i) {
        if (abs(a[i] - a[i - 1]) > limit) {
            int diff = abs(a[i] - a[i - 1]);
            operations += (diff - 1) / limit;
        }
    }
    return operations;
}

// 判断在给定凌乱度限制下是否能够通过替换操作使得凌乱度不超过该限制
int check(int a[], int n, int k, int limit) {
    int operations = count_operations(a, n, limit);
    return operations <= k;
}

// 通过二分查找找到凌乱度的最小值
int minDisorder(int a[], int n, int k) {
    int left = 0, right = 0;
    for (int i = 1; i < n; ++i) {
        right = max(right, abs(a[i] - a[i - 1]));
    }

    while (left < right) {
        int mid = (left + right) / 2;
        if (check(a, n, k, mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    int n, k;
    int a[MAX_N];

    // 输入花朵数量和最多操作次数
    scanf("%d %d", &n, &k);

    // 输入每朵花的漂亮度
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    // 输出结果
    printf("%d\n", minDisorder(a, n, k));

    return 0;
}
