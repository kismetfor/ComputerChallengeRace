#include <stdio.h>

#define M 3
#define N 5

void Input(int (* a)[N],int m,int n);
void reverse(int (*a)[N],int (*b)[M]);
void Output1(int (*a)[M],int m,int n);
void Output2(int (*a)[N],int m,int n);
/********** Begin **********/

void Input(int (* a)[N],int m,int n){
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void reverse(int (*a)[N],int (*b)[M]){
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            b[i][j] = a[j][i];
        }
    }
}


//函数 output2() 实现转置前二维数组的输出；
//函数 output1() 实现转置后二维数组的输出；

void Output2(int (*a)[N],int m,int n){
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void Output1(int (*a)[M],int m,int n){
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int arr[M][N];
    int brr[N][M];
    Input(arr, M, N);
    reverse(arr, brr);
    Output2(arr, M, N);
    Output1(brr, N, M);
    return 0;
}



/********** End **********/
