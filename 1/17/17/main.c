#include <stdio.h>
#include <stdlib.h>

//取绝对值
//找最大值索引
//替换
//计算凌乱度

int find_max_index(int* a, int n){
    int max = abs(a[1] - a[0]);
    int index = 0;
    for (int i=1; i<n-1; i++) {
        if(abs(a[i+1] - a[i]) > max){
            index = i;
            max = abs(a[i+1] - a[i]);
        }
    }
    return index;
}

int lingluan(int* a, int n){
    int max = abs(a[1] - a[0]);
    for (int i=1; i<n-1; i++) {
        if(abs(a[i+1] - a[i]) > max){
            max = abs(a[i+1] - a[i]);
        }
    }
    return max;
}

int main(int argc, const char * argv[]) {
    int n;
    int k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", a+i);
    }
    
    for (int i=0; i<k; i++) {
        int index = find_max_index(a, n);
        a[index] = (a[index] +a[index+2])/2;
    }
    int ret = lingluan(a, n);
    printf("%d\n", ret);
    for (int i=0; i<n; i++) {
        printf("%d ", *(a+i));
    }
    return 0;
}
