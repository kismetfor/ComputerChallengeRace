//
//  main.c
//  求最大公约数和最小公倍数
//
//  Created by rain on 2023/11/12.
//

#include <stdio.h>

void swap(int* a, int* b);

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int GCD(int a, int b){
    if(a>b){
        swap(&a, &b);
    }
    if(b%a == 0){
        return a;
    }
    return GCD(a, b%a);
}

int main(int argc, const char * argv[]) {
    int a, b;
    scanf("%d %d", &a, &b);
    int gcd = GCD(a, b);
    int lcm = a*b/gcd;
    printf("最大公约数是:%d\n", gcd);
    printf("最小公倍数是:%d\n", lcm);
    return 0;
}
