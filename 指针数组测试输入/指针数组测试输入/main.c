//
//  main.c
//  指针数组测试输入
//
//  Created by rain on 2023/11/14.
//

#include <stdio.h>

#define N 3
#define M 5

//void print(int* a){
//    for (int i=0; i<N; i++) {
//        for (int j=0; j<M; j++) {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//}

int main(int argc, const char * argv[]) {
    int arr[N][M];
    int* p[N];
    for (int i=0; i<N; i++) {
        for (p[i] = arr[i]; p[i]<arr[i]+M; p[i]++) {
            scanf("%d", p[i]);
        }
    }
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            printf("%d ", arr[i][j]);
        }
    }
    
//    print(arr);
    return 0;
}
