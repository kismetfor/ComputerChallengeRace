//
//  main.c
//  16
//
//  Created by rain on 2023/11/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a[24];
int weishu1;
int weishu2;

void shuchihua(void){
    for (int i=0; i<24; i++) {
        a[i] = 11;
    }
}

int weishu(int n){
    int ret = 1;
    while (n /= 10) {
        ret++;
    }
    return ret;
}

void print(void){
    for (int i=0; i<weishu1+weishu2; i++) {
        printf("%d", a[i]);
    }
    printf("\n");
}



int compare(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

void test(void){
    int x, y;
    scanf("%d %d", &x, &y);
    weishu1 = weishu(x);
    weishu2 = weishu(y);
    int i = 0;
    
    int n = x;
    for (i=0; i<weishu1; i++) {
        a[i] = n/pow(10, weishu1-1-i);
        n -= a[i]*pow(10, weishu1-1-i);
    }
    
    n = y;
    int j = 0;
    for (; i<weishu1+weishu2; i++) {
        a[i] = n/pow(10, weishu2-1-j);
        n -= a[i]*pow(10, weishu2-1-j);
        j++;
    }
    
    qsort(a, sizeof(a)/sizeof(a[0]), sizeof(a[0]), compare);
    print();
}


int main(int argc, const char * argv[]) {
    shuchihua();
    test();
    return 0;
}
